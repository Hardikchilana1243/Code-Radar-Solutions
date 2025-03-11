#include<stdio.h>
int main(){
   int n,a;
//    printf("enter value of n: ");
   scanf("%d",&n);
   a=n;
   for(int i=1;i<=n;i++){
       for(int j =1;j<=a;j++){
        int d =j+64;
        char ch = (char)d;
        printf("%c",ch);
           
       }
       a--;
       printf("\n");
   }
   return 0;
}