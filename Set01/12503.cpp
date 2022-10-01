#include<bits/stdc++.h>
using namespace std;

#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long
int arr[100 +5];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, n;
    string op;
    cin >> t;
    while(t--){
        cin >> n;
        int p = 0, redo;
        fore(i,0,n){
            cin >> op;
            switch (op[0])
            {
                case 'L':
                    arr[i] = -1;
                    break;
                case 'R':
                    arr[i] = 1;
                    break;
                case 'S':
                    cin >> op;
                    cin >> redo;
                    arr[i] = arr[redo-1];
                    break;
            }
            p += arr[i];
        }
        cout << p << "\n";
    }

}