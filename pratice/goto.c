#include<stdio.h>
int main(){

    int num;
    printf("enter the value");
    scanf("%d",&num);

    if(num%2==0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
    even:
        printf("%d is even\n",num);
         return 0;
    odd:
        printf("%d is odd\n",num);
         return 0;   
}