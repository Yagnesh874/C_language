#include <stdio.h>
int main()
{
    int cube1 = 0, cube, n;
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &n);
        cube = n * n * n;
        cube1 = cube1 + cube;
        printf("%d\n", cube);
    }
    printf("%d", cube1);
    return 0;
}