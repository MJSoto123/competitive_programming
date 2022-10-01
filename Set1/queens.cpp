#include<bits/stdc++.h>
using namespace std;

const int N = 20;

int n;
bool col[N];
bool diag1[N << 1];
bool diag2[N << 1];
vector<int> positions;
vector<vector<int>> solutions;

bool check_col(int x){
	return col[x];
}

bool check_diag1(int x, int y){
	return diag1[x - y + n];
}

bool check_diag2(int x, int y){
	return diag2[x + y];
}

void mark_col(int x){
	col[x] = !col[x];
}

void mark_diag1(int x, int y){
	diag1[x - y + n] = !diag1[x - y + n];
}

void mark_diag2(int x, int y){
	diag2[x + y] = !diag2[x + y];
}

void backtracking(int row){
	if(row == n){
		solutions.emplace_back(positions);
		return;
	}
	for(int c = 0; c < n; c++){
		if(check_col(c)) continue;
		if(check_diag1(row, c)) continue;
		if(check_diag2(row, c)) continue;
		mark_col(c);
		mark_diag1(row, c);
		mark_diag2(row, c);
		positions.emplace_back(c);
		backtracking(row + 1);
		positions.pop_back();
		mark_col(c);
		mark_diag1(row, c);
		mark_diag2(row, c);
	}
}

int main() {
	cin >> n;
	backtracking(0);
	cout << solutions.size() << endl;
	return 0;
}