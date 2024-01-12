#include <stdio.h>
int main()
{
    int i = 0;
    printf("Enter a number : ");
    scanf("%d", &i);
    while (i >= 0)
    {
        printf("%d\n", i);
        i--;
    }
    return 0;
}