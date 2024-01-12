#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int number;
    printf("Enter a number 1 : ");
    scanf("%d", &number);
    int r_num;
    printf("Enter a number 2 : ");
    scanf("%d", &r_num);
    int ncr = factorial(number) / (factorial(r_num) * factorial(number - r_num));
    printf("%d", ncr);
    return 0;
}