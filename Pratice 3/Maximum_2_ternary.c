#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a number : ");
    scanf("%d",&a);
     printf("Enter a number : ");
    scanf("%d",&b);
    int max=(a>b)?a:b;
    printf("%d is maximum number",max);
   return 0;
}