#include<stdio.h>
int main()
{
    int n, i, j, k;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        for (j = 1; j < n - i; j++)
        {
            printf(" ");
        }
    }
   return 0;
}