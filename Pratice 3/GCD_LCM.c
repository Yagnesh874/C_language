#include <stdio.h>
int main()
{
    int lcm=0,gcd, ans = 0, n01, n02;
    printf("Enter a number 1 : ");
    scanf("%d", &n01);
    printf("Enter a number 2 : ");
    scanf("%d", &n02);
    for (int i = 1; i <= n01; i++)
    {
        if (n01 % i == 0 && n02 % i == 0)
        {
            gcd = i;
            lcm=(n01*n02)/gcd;
        }
    }
    printf("gcd is = %d\n", gcd);
    printf("lcm is = %d\n", lcm);

}