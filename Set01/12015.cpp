#include<bits/stdc++.h>
using namespace std;
int arr[10];
char link[10][100];
int main(){
    int t;
    scanf("%d", &t);
    
    for(int j = 0; j < t; j++)
    {
        int max = 0;
        for(int i = 0; i < 10; i++){
            scanf("%s %d", link[i], &arr[i]);
            if(arr[i] >= max){
                max = arr[i];
            }
        }
        printf("Case #%d:\n", j+1);
        for(int i = 0; i < 10; i++){
            if(arr[i] == max){
                printf("%s\n", link[i]);
            }
        }
    }
    
}