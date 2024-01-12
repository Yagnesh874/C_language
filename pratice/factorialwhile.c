#include<stdio.h>
int main(){

    int i,num,fact=1;
    printf("enter the number");
    scanf("%d",&num);

    while (i >=1)
    {
        fact = fact*i;
         i++;
    }
    printf("%d",fact);
        
        
    // return 0;
}