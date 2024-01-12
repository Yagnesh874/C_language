#include <stdio.h>
int main()
{
    long int n;
    int rate = 0;
    printf("Enter a the amount :  ");
    scanf("%ld", &n);
    if (n >= 300000 && n < 600000)
    {
        rate = n * 5 / 100;
    }
    else if (n >= 600000 && n < 900000)
    {
        rate = n * 10 / 100;
    }
    else if (n >= 900000 && n < 1200000)
    {
        rate = n * 15 / 100;
    }
    else if (n >= 1200000 && n < 1500000)
    {
        rate = n * 20 / 100;
    }
    else if (n >= 1500000)
    {
        rate = n * 30 / 100;
    }
    else
    {
        printf("No income tax deposit");
    }
    printf("%d", rate);
    return 0;
}