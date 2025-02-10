#include <stdio.h>
int main(){
    char ch;
    scanf("%d",&ch);
    if(ch>='A' && ch<='z'){
        printf("Uppercase");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}