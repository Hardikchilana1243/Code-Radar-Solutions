#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a%b==0)
    {
        printf("Equal");
    }
    else if(a>b)
    {
        printf("First")

    }
    else{
        printf("Second");
    }
    return 0;
}
