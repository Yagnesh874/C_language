#include <stdio.h>
int main()
{
    int n;
    // char c = 'A';
    printf("Enter a number : ");
    scanf("%d", &n);
    int i, j;
    for (i = 65; i <= 68; i++)
    {
        for (j = 65; j <= 68; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }
    return 0;
}