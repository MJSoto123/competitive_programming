#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,r,c;
    char s;
    scanf("%d",&t);
    while(t--){
        scanf("%c %d %d", s, &r, &c);
        switch (s)
        {
            case 'r':
                printf("%d\n", min(r,c));
                break;
            case 'k':
                printf("%d\n", (r*c+1)/2);
                break;
            case 'Q':
                printf("%d\n", min(r,c));
                break;
            case 'K':
                printf("%d\n", ((r+1)/2)*((c+1/2)));
                break;
        }
    }
}