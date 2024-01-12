#include<stdio.h>

void number(int a){
    int fact=1;
    for(int i=1;i<=5;i++){
        fact=fact*i;
    }
    printf("%d",fact);
}
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    number(a);
   return 0;
}