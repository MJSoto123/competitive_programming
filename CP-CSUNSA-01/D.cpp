#include<bits/stdc++.h>
using namespace std;

#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int arr[5];
    map<string, int> dicc;
    string s;
    int maxi = 0;
    fore(i,0,n){
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >>arr[4];
        sort(arr, arr+5);
        s = to_string(arr[0]) +to_string(arr[1]) + to_string(arr[2]) + to_string(arr[3]) + to_string(arr[4]);
        maxi = max(maxi, ++dicc[s]);
    }
    int count = 0;
    dbg(maxi);
    for(auto it = dicc.begin(); it != dicc.end(); it++){
        if(maxi == it->second) count += maxi;
    }
    cout << count << "\n";
}