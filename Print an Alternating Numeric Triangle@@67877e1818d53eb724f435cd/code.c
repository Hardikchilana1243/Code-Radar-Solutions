 #include<stdio.h>
 int main(){
    int n;
    // printf("enter the number of rows\n");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n; i++){
        if(i%2!=0) a = 1;
        else a=0;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            if(a==0) a=1;
            else a = 0;
        }
        printf("\n");
    }
 }