#include<bits/stdc++.h>
using namespace std;

#define foru(i, a, b) for (long long i = a; i < b; i++)
#define ford(i, a, b) for (long long i = a; i > b ; i--)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
const int N = 2e5 + 5;
ll V[10];
ll arr[N][6];
ll n, q;
int L , R;
string s;
ll query(int idx){
    ll sm[6];
    foru(i,0,6){
        sm[i] = 0;
    }
    while(idx > 0){
        foru(i,0,6){
            sm[i] += arr[idx][i];
        }
        idx -= (idx & (-idx));
    }
    ll ans = 0;
    foru(i,0,6){
        ans += sm[i]*V[i];
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // ios_base::sync_with_stdio(false);  
    // freopen("input.txt", "r", stdin);  
    // freopen("output.txt", "w", stdout); 

    char op;
    cin >> n >> q;
    foru(i,0,n+1){
        foru(j,0,6){
            arr[i][j] = 0;
        }
    }
    foru(i,0,6){
        cin >> V[i];
    }
    cin >> s;
    int idx, tag, ntag;
    ll val;
    foru(i, 1, n+1){
        idx = i;
        tag = s[i-1]-'0';
        while(idx <= n){
            arr[idx][tag-1]++;
            idx += (idx & (-idx)); 
        }
    }

    while (q--)
    {
        cin >> op;
        switch (op)
        {
        case '1':
            cin >> idx >> ntag;
            tag = s[idx-1] - '0';
            s[idx-1] = (ntag +'0');

            while(idx <= n){
                arr[idx][tag-1]--;
                arr[idx][ntag-1]++;
                idx += (idx & (-idx));
            }
            break;
        
        case '2':
            cin >> idx >> val;
            V[idx-1] = val;
            break;

        case '3':
            cin >> L >> R;
            ll salida = (query(R) - query(L-1));
            cout <<salida << "\n";
            break;
        }
    }
    return 0;
}