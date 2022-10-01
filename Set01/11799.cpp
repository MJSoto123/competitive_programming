#include<bits/stdc++.h>
using namespace std;

#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    int n, temp;
    fore(i,1,t+1){
        cin>> n;
        int maxi = 0;
        fore(j,0,n){
            cin >> temp;
            maxi = max(maxi, temp);
        }
        cout << "Case " << i << ": " << maxi << "\n";
    }
}