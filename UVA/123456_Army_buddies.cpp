#include<bits/stdc++.h>
using namespace std;
int der[100000 +5];
int izq[100000 +5];
int main(){
    int s,b,l,r;
    
    while (scanf("%d %d", &s, &b))
    {
        if(s == 0 && b == 0) break;
        for(int i = 1; i < s-1; i++){
            der[i] = i+1;
            izq[i] = i-1;
        }
        der[s-1] = -1;
        izq[0] = -1;
        for(int i = 0; i < b; i++){
            scanf("%d %d", &l, &r);
            izq[der[r]] = izq[l];
            if(izq[l] == -1){
                printf("* ");
            }else{
                printf("%d ", izq[l]);
            }

            der[izq[l]] = der[r];
            if(der[r] == -1){
                printf("* \n");
            }else{
                printf("%d \n", der[r]);
            }

        }
    }
    
    
}


// 1 1
// 1 1
// 10 4
// 2 5
// 6 9
// 1 1
// 10 10
// 5 1
// 1 1
// 0 0