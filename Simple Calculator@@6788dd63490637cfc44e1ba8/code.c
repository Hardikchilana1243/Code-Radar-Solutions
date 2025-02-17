#include<stdio.h>
int  main(){
    int a,b,sum,sub,div,mul;
    scanf("%d%d",&a,&b);
    if(sum == a+b){
        printf("%d",sum);
    }
    else if(sub = a-b)
    {
        printf("%d",sub);
    }
    else if(mul == a*b)
    {
        printf("%d",mul);
    }
    else if(div == a/b){
        printf("%d",div);
    }
    else {
        printf("error");
    }
    return 0;
}