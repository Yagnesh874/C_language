#include<stdio.h>
int main()
{
    int rem=0,n,sum=0;
    printf("enter a number : ");
    scanf("%d",&n);
    while (n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d ",sum);
    
   return 0;
}