#include<stdio.h>

int main(){
    int n=5;
    // scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=n-1;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}