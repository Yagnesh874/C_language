#include <stdio.h>
int main()
{
    int a, b, c;
    float sum = 0;
    printf("Enter a number 1 : ");
    scanf("%d", &a);
    printf("Enter a number  2 : ");
    scanf("%d", &b);
    printf("Enter a number 3 : ");
    scanf("%d", &c);
    sum = (float)(a + b + c) / 3;
    printf("%f", sum);
    return 0;
}