#include <stdio.h>
void fact(int n);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    fact(a);
    return 0;
}
void fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
}