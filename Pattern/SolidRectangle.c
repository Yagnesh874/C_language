#include <stdio.h>
int main()
{
    int i;
    int n;
    for (i = 1; i <= 4; i++)//Outer loop for--> No of line
    {
        for (n = 1; n <= 5; n++)//Inner loop for--> No of stars each line
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}