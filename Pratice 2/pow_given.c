#include <stdio.h>
int main()
{
    int b = 1, n, pow;
    printf("Enter a number : ");
    scanf("%d", &n);
    printf("Enter a power of a number : ");
    scanf("%d", &pow);
    for (int i = 1; i <= pow; i++)
    {
        b=b*n;
    }
    printf("%d", b);
    return 0;
}