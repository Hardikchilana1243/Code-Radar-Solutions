#include<stdio.h>
int  main(){
        int sum;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n ;i+=1){
        sum = sum +i;
    }
    printf("%d",sum);

    return 0;
}