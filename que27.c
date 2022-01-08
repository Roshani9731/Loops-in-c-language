#include<stdio.h>

int main(){
    int n=5;
    // scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int c=i;
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=n-i+1;j<=n;j++){
            printf("%d ",c);
            c++;
        }
        c=c-2;
        for(int j=n+1;j<n+i;j++){
            printf("%d ",c);
            c--;
        }
        printf("\n");
    }
    return 0;
}