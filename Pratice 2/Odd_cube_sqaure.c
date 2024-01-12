#include <stdio.h>
int main()
{
    int i, cube = 0, cube1 = 0;
    for (i = 1; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            cube = i * i;
            cube1 = i * i * i;
            printf("%d\n", cube);
            printf("%d\n", cube1);
        }
        // printf("%d\n",cube);
        // printf("%d\n",cube1);
    }
    return 0;
}