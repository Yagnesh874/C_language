#include<stdio.h>
int main(){

    int a,b,temp;
    printf("enter the number");
    scanf("%d %d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("%d %d",a,b);    
    return 0;
}