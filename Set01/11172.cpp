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
    int a, b;
    while(t--){
        cin>> a >> b;
        if(a == b) cout << "=\n";
        else if( a > b) cout << ">\n";
        else cout << "<\n";
    }
}