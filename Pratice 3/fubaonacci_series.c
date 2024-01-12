#include <stdio.h>
int main()
{
    int f2 = 0, f=0, f1 = 1, n0;
    printf("Enter a number : ");
    scanf("%d", &n0);
    for (int i = 1; i <= n0; i++)
    {
        f2 = f + i;
    }
    printf("%d", f2);
    return 0;
}