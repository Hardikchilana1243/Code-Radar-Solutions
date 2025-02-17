#include<stdio.h>
int  main(){
    int a,b,sum,sub,div,mul;
    scanf("%d%d",&a,&b);
    if(sum == a+b){
        printf("%d",sum);
    }
    if(sub == a-b)
    {
        printf("%d",sub);
    }
    if(mul ==a*b)
    {
        printf("%d",mul);
    }
    if(div == a/b){
        printf("%d",div);
    }
    else {
        printf("error");
    }
    return 0;
}