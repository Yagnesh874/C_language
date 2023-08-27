#include <stdio.h>
int main()
{
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if (n < 0)
    {
        n = n * (-1);// n = -7 * (-1)
                    //  n =  7
    }
    printf("Absolute number : %d", n);
}