#include<bits/stdc++.h>
using namespace std;

#define fore(i, a, b) for (long long i = a; i < b; i++)
#define dbg(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define ll long long

int arr[200000 + 5];
int tam[200000 + 5];
long long sum[200000 + 5];

int find(int x){
    if(x == arr[x]) return x;
    else return arr[x] = find(arr[x]);
}
void unir(int p, int q){
    int a = find(p);
    int b = find(q);
    if(a == b) return;
    arr[a] = b;
    tam[b] += tam[a];
    sum[b] += sum[a];
}
void mover(int p, int q){
    int a = find(p);
    int b = find(q);
    if(a == b) return;
    arr[p] = b;
    tam[a]--;
    sum[a] -= p;
    tam[b]++;
    sum[b] += p;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, x, p, q;
    while(cin >> n >> m){
        for ( int i = 1, j = n + 1; i <= n; ++i, ++j ) {
            arr[i] = j;
            arr[j] = j;
            tam[j] = 1;
            sum[j] = i;
        }
        fore(i, 0, m){
            cin>> x;
            switch (x)
            {
                case 1:
                    cin >> p >> q;
                    unir(p,q);
                    break;
                case 2:
                    cin >> p >> q;
                    mover(p,q);
                    break;
                case 3:
                    cin >> p;
                    int a = find(p);
                    cout << tam[a] << " " << sum[a] << "\n";
                    break;
            }
        }   
    }

    
}