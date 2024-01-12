#include <stdio.h>
int min(int a, int b)
{
    int min = a;
    if (b < a)
        min = b;
    else
        min = a;
    return min;
}
int main()
{
    int a, b;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    int c = min(a, b);
    printf("%d", c);
    return 0;
}