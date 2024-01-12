#include <stdio.h>
int main()
{
    char c = 'h';
    long int a;
    printf("Enter a gender : ");
    scanf("%c", &c);
    printf("Enter a salary : ");
    scanf("%ld", &a);
    if (c == 'm' && a >= 150000)
    {
        printf("The salary is taxable\n");
    }
    else if (c == 'f' && a >= 180000)
    {
        printf("The salary is  taxable\n");
    }
    else
    {
        printf("The salary is no taxable");
    }
    return 0;
}