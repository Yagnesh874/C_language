#include <stdio.h>
int main()
{
    int emp;
    printf("Enter employee id : ");
    scanf("%d", &emp);
    float basic, da, hra;
    float pf, gross;
    printf("Enter the basic salary : ");
    scanf("%f", &basic);
    printf("Enter da : ");
    scanf("%f", &da);
    printf("Enter hra : ");
    scanf("%f", &hra);
    pf = (12 * basic) / 100;
    printf("%f\n", pf);
    gross = basic + da + hra;
    printf("%f\n", gross);
    printf("Employee id is =%d\n", emp);
    printf("Basic salary is =%f\n", basic);
    printf("DA is =%f\n", da);
    printf("HRA is =%f\n", hra);
    printf("Pf is =%f\n", pf);
    printf("gross is =%f\n", gross);
    return 0;
}