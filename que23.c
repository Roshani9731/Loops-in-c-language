#include<stdio.h>

int main(){
    int n=5;
    // scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            printf("%d ",c);
            c++;
        }
        for(int j=i+1;j<=2*n-i;j++){
            printf("  ");
        }
        int x=i;
        for(int j=2*n-i+1;j<=2*n;j++){
            printf("%d ",x);
            x--;
        }printf("\n");
    }
    return 0;
}