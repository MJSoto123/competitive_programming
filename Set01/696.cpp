#include<bits/stdc++.h>
using namespace std;

#define foru(i, a, b) for (long long i = a; i < b; i++)
#define ford(i, a, b) for (long long i = a; i > b ; i--)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n,m, ans;
    while(cin>> n >>m){
        if(n == 0 && m == 0) break;
        if(n<m) swap(n,m);
        if(m == 1) ans = m*n;
        else if(m == 2){
            ans = int((n/4)*4);
            if(n%4 >= 1) ans += 2;
            if(n%4 >= 2) ans += 2;
        }
        else ans = int((n*m+1)/2);
        cout << ans << " knights may be placed on a " << m << " row " << n << " column board.\n";
    }
}