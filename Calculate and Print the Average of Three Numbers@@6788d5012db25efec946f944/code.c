#include <stdio.h>
int main(){
    int a,b,c;
    int d;
    printf("value of a is : ");
    scanf("%d",&a);
    printf("value of b is : ");
    scanf("%d",&b);
    printf("value of c is : ");
    scanf("%d",&c);
    d= (a+b+c)/3;
    printf("the average of three number is : %d",d);
    return 0;
}