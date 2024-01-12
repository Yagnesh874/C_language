#include <stdio.h>
int main()
{

    float p, r, n, si;
    printf("enter the number");
    scanf("%f", &p);
    printf("enter the number");
    scanf("%f", &r);
    printf("enter the number");
    scanf("%f", &n);
    si = (p * r * n) / 100;
    printf("simple intrest is %f", si);
}