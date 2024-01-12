#include <stdio.h>
int main()
{
    char ch = 'a';
    int row;
    printf("Enter a row");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", ch);
        ch++;
        }
        printf("\n");
    }
    return 0;
}