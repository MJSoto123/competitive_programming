#include<bits/stdc++.h>
using namespace std;

#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
int arr[100 +5];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, b, h, w;
    while(cin >> n >> b >> h >> w){
        int total = INT_MAX;
        int cost;
        int temp;
        fore(i,0,h){
            cin >> cost;
            int ok = false;
            fore(j,0,w){
                cin >> temp;
                if(n <= temp){
                    ok = true;
                }
            }
            if(ok) total = min(total, n*cost);
        }
        if(total <= b) cout << total << "\n";
        else cout << "stay home\n";
    }
}