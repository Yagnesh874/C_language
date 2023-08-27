#include <stdio.h>
int main()
{
    int n;
    printf("Enter any number : ");
    scanf("%d", &n);
    if (n > 5 && n <= 10)
    {
        printf("The given number is between 5 and 10");
    }
    else
    {
        printf("The given number is  not between 5 and 10");
    }
}