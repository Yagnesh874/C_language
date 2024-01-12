#include<stdio.h>
void pn();
int main()
    {
        pn();
    }
void pn()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive number",num);
    }
    else{
        printf("%d is negative number",num);
    }
}
    
    
