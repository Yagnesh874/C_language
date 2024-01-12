
#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    if (n > 99 && n < 1000)
    {
        printf("The given number is 3 digit");
    }
    else
    {
        printf("The given number is  not 3 digit");
    }
}