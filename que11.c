#include<stdio.h>

int main(){
    int n=5;
    // scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        int c=1;
        for(int j=n-i;j<n;j++){
            printf("%d ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}