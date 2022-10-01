#include<bits/stdc++.h>
using namespace std;

#define foru(i, a, b) for (long long i = a; i < b; i++)
#define ford(i, a, b) for (long long i = a; i > b ; i--)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, f;
        cin >> a >> f;
        string ans = "";
        foru(i,1,a+1){
            ans =  ans + string(i,i+48) + "\n";
        }
        ford(i,a-1,0){
            ans =  ans + string(i,i+48) + "\n";
        }
        string act = ans;
        foru(i,1,f){
            act += "\n" + ans;
        }
        cout << act;
        if(t) cout << "\n";
    }
}