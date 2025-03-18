// #include<stdio.h>
// int main(){
//     int n;
//     // printf("enter the number of lines: ");
//     scanf("%d",&n);
//     int nsp= n/2;
//     int nst = 1;
//     int ml =  n/2+1;
//     for(int i  =1;i<=n;i++){
//         for(int j=1;j<=nsp;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=nst;k++){
//             printf("*");
//         }
//         if(i<ml){
//             nsp--;
//             nst+=2;
//         }
//         else{
//             nsp++;
//             nst-=2;
//         }
//         printf("\n");
//         }
//         return 0;
//     }


#include <stdio.h>

void printDiamond(int n) {
    // Upper half
    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    // Lower half
    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
}

int main() {
    int n;
    // printf("");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("*");
    } else {
        printDiamond(n);
    }
    return 0;
}