#include <bits/stdc++.h>
using namespace std;

#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long

int ress[3000 + 5];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int T;
    while (cin >> T)
    {
        fore(i,0,T-1){
            ress[i] = 0;
        }
        int diff, prev, act;
        cin >> act;
        prev = act;
        fore(i,1,T){
            cin >> act;
            diff = abs(act-prev); 
            if(diff < T && diff > 0){
                ress[diff-1]++;
            }
            prev = act;
        }
        bool ok = true;
        for(int i = 0; i < T-1; i++){
            if(ress[i] != 1){
                ok = false;
                break;
            }
        }
        ok ? cout << "Jolly\n" : cout << "Not jolly\n";
    }
    return 0;
}
