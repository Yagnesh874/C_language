#include <stdio.h>
int main()
{

    float p, r, n, si;
    printf("enter the principal");
    scanf("%f", &p);
    printf("enter the rate");
    scanf("%f", &r);
    printf("enter the number");
    scanf("%f", &n);
    si = p*r*n/100;
    printf("%f is simple intrest",si);
    return 0;
}