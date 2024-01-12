#include <stdio.h>

int maximum(int a, int b)
{
    if (a > b)
    {
        printf("A is maximum");
    }
    else
    {
        printf("B is maximum");
    }
    return a, b;
}
int main()
{
    int n1, n2;
    printf("Enter a number 1 : ");
    scanf("%d", &n1);
    printf("Enter a nunber 2 : ");
    scanf("%d", &n2);
    maximum(n1, n2);
    return 0;
}