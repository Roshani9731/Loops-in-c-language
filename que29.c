#include<stdio.h>

int main(){
    int n=5;
    // scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf("  ");
        }
        for(int j=n-i+1;j<=n;j++){
            if((i+j)%2==0){
                printf("* ");
            }
            else{
                printf("A ");
            }
        }
        for(int j=n+1;j<n+i;j++){
            if((i+j)%2==0){
                printf("* ");
            }
            else{
                printf("A ");
            }
        }
        printf("\n");
    }
    return 0;
}