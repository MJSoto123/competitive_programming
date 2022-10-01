#include<bits/stdc++.h>
using namespace std;

#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    string ans,op;
    while(cin >> t){
        if(t == 0) break;
        ans = "+x";
        fore(i,0,t-1){
            cin >> op;
            if(op == "No") continue;
            if( ans == "+x"){
                ans = op;
            }else if(ans == "-x"){
                if(op == "+y") ans = "-y";
                else if(op == "-y") ans = "+y";
                else if(op == "+z") ans = "-z";
                else ans = "+z";
            }else if(ans == "+y"){
                if(op == "+y") ans = "-x";
                else if(op == "-y") ans ="+x"; 
            }else if(ans == "-y"){
                if(op == "+y") ans = "+x";
                else if(op == "-y") ans ="-x";
            }else if (ans == "+z"){
                if(op == "+z") ans = "-x";
                else if(op == "-z") ans = "+x";
            }else {
                if(op == "+z") ans = "+x";
                else if(op == "-z") ans = "-x";
            }
        }
        cout << ans << "\n";
    }

}