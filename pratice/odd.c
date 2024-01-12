#include<stdio.h>
void fun();
int main()
    {
        fun();
    }
void fun()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("%d is even number",num);
    }
    else
    {
        printf("%d is odd number",num);
    }
}        
    
