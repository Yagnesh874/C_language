#include <stdio.h>
int main()
{
    float a, b, sum = 0;
    printf("Enter a number 1 : ");
    scanf("%f", &a);
    printf("Enter a number 2 : ");
    scanf("%f", &b);
    sum = a * b;
    printf("%f", sum);
    return 0;
}