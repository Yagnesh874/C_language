#include <stdio.h>
int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int factorial_num, int r_num)
{
    int ncr = factorial(factorial_num) / (factorial(r_num) * factorial(factorial_num - r_num));
}
int main()
{
    int number;
    int rows;
    int cols;
    printf("Enter a number : ");
    scanf("%d", &number);
    for (rows = 0; rows <= number; rows++)
    {
        for (cols = 0; cols <= rows; cols++)
        {
            int ncr = combination(rows, cols);
            printf("%d ", ncr);
        }
        printf("\n");
    }
    return 0;
}