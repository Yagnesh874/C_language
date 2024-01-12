#include<stdio.h>
#include<ctype.h>
int main(){
    char c;
    printf("enter value of c");
    scanf("%c",&c);
    if(isdigit(c)==0)
    {
        printf("%c is not digit",c);
    }
    else{
        printf("%c is digit");
    }
} 