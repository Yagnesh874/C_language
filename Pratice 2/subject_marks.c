#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter the subject marks 1 :");
    scanf("%d", &a);
    printf("Enter the subject marks 2 :");
    scanf("%d", &b);
    printf("Enter the subject marks 3 :");
    scanf("%d", &c);
    printf("Enter the subject marks 4 :");
    scanf("%d", &d);
    int tot = a + b + c + d;
    printf("The total marks is %d\n", tot);
    float per = tot / 4;
    printf("The total perntange is %f\n", per);
    if (per >= 90)
    {
        printf("A+ grade\n");
    }
    else if (per >= 80 && per <= 90)
    {
        printf("A grade");
    }
    else if (per >= 70 && per <= 80)
    {
        printf("B grade");
    }
    else if (per >= 60 && per <= 70)
    {
        printf("C grade");
    }
    else if (per >= 50 && per <= 60)
    {
        printf("D grade");
    }
    else
    {
        printf("You are fail");
    }
    return 0;
}