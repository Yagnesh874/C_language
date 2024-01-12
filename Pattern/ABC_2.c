#include <stdio.h>
int main()
{
    int n;
    int i, j;
    char c = 'A';
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
            {
                printf("%c", c++);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}