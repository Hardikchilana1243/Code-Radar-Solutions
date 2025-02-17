// #include<stdio.h>
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     int b=1;
//     for(int i=2;i<=a-1;i++){

//         if(a%i==0){
//             b=0;
//             break;

//         }
//         else{
//             continue;
//         }
//     }if (b==1){
//         printf("Prime");

//     }
//     else{

//         printf("Not Prime");
//     }
// }


// #include<stdio.h>
// int main(){
//     int a;
//     if(a>2 && a%1==0 && a%2==0 || a%3==0 || a%5 ==0){
//         printf("Not Prime");
//     }
//     else{
//         printf("Prime");
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(i=2;i<=n-1;i++){
        printf("Not prime");
        break;
        if(a==0){
            printf("Prime");
        }
    }
return 0;
}