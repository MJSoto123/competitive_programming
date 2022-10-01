#include<bits/stdc++.h>
using namespace std;

#define foru(i, a, b) for (long long i = a; i < b; i++)
#define ford(i, a, b) for (long long i = a; i > b ; i--)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long

string dicc[10] = {".***..","*.....", "*.*...", "**....", "**.*..", "*..*..", "***...", "****..","*.**..", ".**..."};
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a;
    string b;
    while(cin >> a){
        if(a == 0) break;
        cin >> b;
        if(b == "S"){
            string s;
            cin >> s;
            string ans;
            foru(j,0,3){
                foru(i,0,a){
                    ans = ans + dicc[s[i]-48][2*j] + dicc[s[i]-48][2*j + 1];
                    if(i != a-1)ans += " ";
                }
                ans += "\n";  
            }
            cout << ans;
        }
        else{
            string s[a],s1;
            foru(i,0,3){
                foru(j,0,a){
                    cin >> s1;
                    s[j] += s1;
                }
            }
            string ans = "";
            foru(i,0,a){
                foru(j,0,10){
                    if(dicc[j] == s[i]){
                        ans = ans + char(j+48);
                    }
                }
            }
            cout << ans << "\n";
        }
    }
}