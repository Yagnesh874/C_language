#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number ");
    scanf("%d", &n);
    if (n && 5 == 0)
    {
        if (n && 3 == 0)
        {
            printf("The given number is divisable by 5 and 3");
        }
        else
        {
            printf("The given number is Not divisable by 5 and 3");
        }
    }
    else
    {
        printf("The given number is Not divisable by 5 and 3");
    }
}