#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=1;
    for(int i=2;i<=a-1;i++){

        if(a%i==0){
            b=0;
            break;

        }
        else{
            continue;
        }
    }if (b==1){
        printf("Prime");

    }
    else{

        printf("Not Prime");
    }
}