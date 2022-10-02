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
    char p;
    int m , n;
    while(t--){
        cin >> p >> m >> n;
        switch (p)
        {
        case 'r':
            cout << min(m,n) << "\n";
            break;
        case 'k':
            cout << int ((m*n+1)/2) << "\n";
            break;
        case 'Q':
            cout << min(m,n) << "\n";
            break;
        case 'K':
            cout << int((m+1)/2)*int((n+1)/2) << "\n"; 
        }
    }
}