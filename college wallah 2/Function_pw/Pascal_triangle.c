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
int combinantion(int fact_num, int r_num)
{
    int ncr = factorial(fact_num) / (factorial(r_num) * factorial(fact_num - r_num));
}
int main()
{
    int number;
    int rows;
    int colmns;
    printf("Enter a number : ");
    scanf("%d", &number);
    for (rows = 0; rows <= number; rows++)
    {
        for (colmns = 0; colmns <= rows; colmns++)
        {
            int ncr = combinantion(rows, colmns);
            printf("%d ", ncr);
        }
        printf("\n");
    }
    return 0;
}