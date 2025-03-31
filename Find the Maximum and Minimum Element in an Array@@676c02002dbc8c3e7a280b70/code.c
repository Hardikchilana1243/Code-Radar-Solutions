// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[];
//     int max = -1;
//     for(int i =0;i<n;i++){
        
//     }
// }

#include<stdio.h>
int main(){
    int n;
    printf("enter the size of arrays : ");
    scanf("%d",&n);
    int arr[n];
    int max = -1;
    for(int i=0;i<n;i++){
    for(int i=0;i<=n-1;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    }
    printf("%d ",max);
    return 0;

}
