#include<stdio.h>
void fact();
int main()
    {
        fact();
    }
void fact()
{    
    int num,i,f=1;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        f = f*i;
    }
    printf("%d is factorial number",f);
}

