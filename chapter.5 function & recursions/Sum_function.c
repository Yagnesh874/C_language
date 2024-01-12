#include <stdio.h>
int sum(int a,int b);
int main()
{
    int n, a, b;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    n = sum(a, b);
    printf("The sum is %d", n);
    return 0;
}
int sum(int a, int b)
{
    return a+b;
}