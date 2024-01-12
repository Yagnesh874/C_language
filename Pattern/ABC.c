#include <stdio.h>
int main()
{
    int n;
    char c = 'A';
    printf("Enter a number : ");
    scanf("%d", &n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i + 1; j++)
        {
            printf("%c", c++);
        }
        printf("\n");
    }
    return 0;
}