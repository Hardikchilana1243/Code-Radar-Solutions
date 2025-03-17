#include<stdio.h>
int main (){
    int n;
    // printf("enter the number of rows: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=i-1;
        for(int q=1;q<=n-i;q++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int j=1;j<=i-1;j++){
            printf("%d",a);
            a--;
        }
        printf("\n");

    }
    return 0;
}