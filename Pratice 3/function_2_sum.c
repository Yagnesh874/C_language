#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}
int main()
{
    int sum = 0, n1, n2;
    printf("Enter a number 1 : ");
    scanf("%d", &n1);
    printf("Enter a number 1 : ");
    scanf("%d", &n2);
    sum = add(n1, n2);
    int sum1 = sub(n1, n2);
    int sum2 = mul(n1, n2);
    int sum3 = div(n1, n2);
    printf("%d\n", sum);
    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);
    return 0;
}