#include<bits/stdc++.h>
using namespace std;

#define foru(i, a, b) for (long long i = a; i < b; i++)
#define ford(i, a, b) for (long long i = a; i > b ; i--)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
char arr[8][8];
int brr[8][8];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    while (cin>>s) {
		int r = 0, c = 0;
        foru(i,0,8){
            foru(j,0,8){
				arr[i][j] = '*';
            }
        }
		foru(i,0,s.length()) {
			if (s[i] == '/') {
				r++;
				c = 0;
			} else if (isalpha(s[i])) {
				arr[r][c] = s[i];
				c++;
			} else if (isdigit(s[i])) {
                c = c + s[i]-'0'; 
			}
		}

		foru(i,0,8){
            foru(j,0,8){
				brr[i][j] = 0;
            }
        }

		foru(r,0,8) {
			foru(c,0,8) {
				char piece = arr[r][c];
				if(piece != '*') brr[r][c]++;
				if (piece == 'p') {
					if (r + 1 < 8 && c + 1 < 8) brr[r + 1][c + 1]++;
					if (r + 1 < 8 && c - 1 >= 0) brr[r + 1][c - 1]++;
				}

				if (piece == 'P') {
					if (r - 1 >= 0 && c + 1 < 8) brr[r - 1][c + 1]++;
					if (r - 1 >= 0 && c - 1 >= 0) brr[r - 1][c - 1]++;
				}

				if (piece == 'k' || piece == 'K') {
					if (r + 1 < 8) {
						brr[r + 1][c]++;
						if (c + 1 < 8) brr[r + 1][c + 1]++;
						if (c - 1 >= 0) brr[r + 1][c - 1]++;
					}
					if (c + 1 < 8) brr[r][c + 1]++;
					if (c - 1 >= 0) brr[r][c - 1]++;
					if (r - 1 >= 0) {
						if (c + 1 < 8) brr[r - 1][c + 1]++;
						brr[r - 1][c]++;
						if (c - 1 >= 0) brr[r - 1][c - 1]++;
					}
				}

				if (piece == 'n' || piece == 'N') {
					if (r + 2 < 8 && c + 1 < 8) brr[r + 2][c + 1]++;
					if (r + 2 < 8 && c - 1 >= 0) brr[r + 2][c - 1]++;

					if (r + 1 < 8 && c + 2 < 8) brr[r + 1][c + 2]++;
					if (r - 1 >= 0 && c + 2 < 8) brr[r - 1][c + 2]++;

					if (r - 2 >= 0 && c + 1 < 8) brr[r - 2][c + 1]++;
					if (r - 2 >= 0 && c - 1 >= 0) brr[r - 2][c - 1]++;

					if (r + 1 < 8 && c - 2 >= 0) brr[r + 1][c - 2]++;
					if (r - 1 >= 0 && c - 2 >= 0) brr[r - 1][c - 2]++;
				}

				if (piece == 'r' || piece == 'R' || piece == 'q' || piece == 'Q') {
					int i = c + 1;
					while (i < 8) {
						brr[r][i]++;
						if (arr[r][i] != '*') break;
						i++;
					}
					i = c - 1;
					while (i >= 0) {
						brr[r][i]++;
						if (arr[r][i] != '*') break;
						i--;
					}
					i = r + 1;
					while (i < 8) {
						brr[i][c]++;
						if (arr[i][c] != '*') break;
						i++;
					}
					i = r - 1;
					while (i >= 0) {
						brr[i][c]++;
						if (arr[i][c] != '*') break;
						i--;
					}
				}

				if (piece == 'b' || piece == 'B' || piece == 'q' || piece == 'Q') {
					int i = r + 1, j = c + 1;
					while (i < 8 && j < 8) {
						brr[i][j]++;
						if (arr[i][j] != '*') break;
						i++;
						j++;
					}
					i = r - 1, j = c + 1;
					while (i >= 0 && j < 8) {
						brr[i][j]++;
						if (arr[i][j] != '*') break;
						i--;
						j++;
					}
					i = r - 1, j = c - 1;
					while (i >= 0 && j >= 0) {
						brr[i][j]++;
						if (arr[i][j] != '*') break;
						i--;
						j--;
					}
					i = r + 1, j = c - 1;
					while (i < 8 && j >= 0) {
						brr[i][j]++;
						if (arr[i][j] != '*') break;
						i++;
						j--;
					}
				}
			}
		}

		int count = 0;
		foru(i,0,8){
            foru(j,0,8){
				if(brr[i][j] ==0) count++;
            }
        }
		cout << count << "\n";
    }
    
}