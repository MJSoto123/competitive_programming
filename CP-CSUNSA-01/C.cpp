#include<bits/stdc++.h>
using namespace std;

bool arr[1000000000+5];
#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;
        fore(i, 0, 1000000004){
            arr[i] = 0;
        }
        int temp;
        fore(i,0,n){
            cin>> temp;
            arr[temp] = 1;
        }
        int count = 0;
        fore(i,0,m){
            cin >> temp;
            if(arr[temp]){
                count++;
            }
        }
        cout << count << "\n";
    }
}