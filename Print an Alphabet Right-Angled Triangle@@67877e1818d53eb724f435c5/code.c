#include<stdio.h>
int main(){
   int n;
   printf("enter value of n: ");
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
       
       for(int j =1;j<=i;j++){
        int d =j+64;
        char ch = (char)d;
        printf("%c ",ch);
           
       }
       printf("\n");
   }
   return 0;
}