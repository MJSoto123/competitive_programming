#include<bits/stdc++.h>
using namespace std;

#define foru(i, a, b) for (long long i = a; i < b; i++)
#define ford(i, a, b) for (long long i = a; i > b ; i--)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ios_base::sync_with_stdio(false);  
    // freopen("input.txt", "r", stdin);  
    // freopen("output.txt", "w", stdout); 
    int n,a,m,b, ans;
    while(cin>> a >>b){
        if(a == 0 && b == 0) break;
        n = a;
        m = b;
        if(a<b) swap(n,m);
        if(m == 1) ans = m*n;
        else if(m == 2){
            ans = int((n/4)*4);
            if(n%4 >= 1) ans += 2;
            if(n%4 >= 2) ans += 2;
        }
        else ans = int((n*m+1)/2);
        cout << ans << " knights may be placed on a " << a << " row " << b << " column board.\n";
    }
}