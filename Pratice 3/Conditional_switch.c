#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf(" X is 1");
        break;
    case 2:
        printf("X is 2");
        break;
    case 3:
        printf("X is 3");
        break;
    case 4:
        printf("X is 4");
        break;
    case 5:
        printf("X is 5");
        break;
    default:
        printf("wrong input");
        break;
    }
    return 0;
}