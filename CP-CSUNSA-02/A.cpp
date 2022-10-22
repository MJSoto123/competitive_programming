#include<bits/stdc++.h>
using namespace std;

#define foru(i, a, b) for (long long i = a; i < b; i++)
#define ford(i, a, b) for (long long i = a; i > b ; i--)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
const int N = 5e6 + 5;
ll arr[N];
int n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // ios_base::sync_with_stdio(false);  
    // freopen("input.txt", "r", stdin);  
    // freopen("output.txt", "w", stdout); 

    ll q, a, b;
    char op;
    cin >> n >> q;
    foru(i,0,n+1){
        arr[i] = 0;
    }
    while (q--)
    {
        cin >> op;
        switch (op)
        {
        case '+':
            cin >> a >> b;
            a++;
            while (a <= n)
            {
                arr[a] += b;
                a += (a & (-a));
            }
            break;
        
        case '?':
            cin >> a;
            ll sm = 0;
            while (a > 0)
            {
                sm += arr[a];
                a -= (a & (-a));
            }
            cout << sm << "\n";
            break;
        }
    }
    return 0;
}