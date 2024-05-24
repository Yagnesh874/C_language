#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int temp1;
    while (n > 0)
    {
        int q = n % 10;
        temp1 = q;
        n = n / 10;
    }
    if (n == temp1)
    {
        printf("The number is palidrome");
    }
    else
    {
        printf("The number is not palidrome");
    }
    return 0;
}