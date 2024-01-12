#include <stdio.h>
int main()
{
    int base;
    int value = 1;
    int exponent;
    printf("Enter the value : ");
    scanf("%d", &base);
    printf("Enter the exponent : ");
    scanf("%d", &exponent);
    while (exponent != 0)
    {
        value = value * base;
        exponent--;
    }
    printf("%d", value);
    return 0;
}