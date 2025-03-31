#include<stdio.h>
int main(){
    int max = arr[0];
     for(int i = 1; i < num; i++)
     {
         if(i > max)
         if(arr[i] > max)
         {
             max = arr[i];
         }
//  @@ -18,7 +18,7 @@ int getMin(int arr[], int num)
     int min = arr[0];
     for(int i = 1; i < num; i++)
     {
         if(i < min)
         if(arr[i] < min)
         {
             min = arr[i];
         }
    }
}
}