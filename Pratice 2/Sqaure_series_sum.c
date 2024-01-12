#include <stdio.h>
int main()
{
    int  sqaure = 0,a=0, n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sqaure=i*i;
        // a=a+sqaure;
        printf("%d ",sqaure+1);
        //  printf("%d ",a);
        // printf("%d",sqaure);
    }
    return 0;
}