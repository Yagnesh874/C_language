#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i = i + 2)
    {
        printf("%d\n", i);
        sum = sum + i;
    }
    printf("\n%d", sum);
    return 0;
}