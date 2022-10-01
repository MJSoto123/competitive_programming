#include<bits/stdc++.h>
using namespace std;

#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int arr[] = {0, 1, 2, 3, 0, 1, 2, 0, 0, 2, 2, 4, 5, 5, 0, 1, 2, 6, 2, 3, 0, 1, 0, 2, 0, 2};
    int size;
    string s;
    int d, p;
    while(cin>> s){
        p = 999;
        fore(i,0,s.length()){
            d = arr[s[i]-'A'];
            if(p != d && d != 0){
                cout << d;
            }
            p = d;
        }
        cout << "\n";
    }
}