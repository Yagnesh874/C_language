#include <stdio.h>
int main()
{
    int n;
    int rem = 0;
    int esum = 0;
    int osum = 0;
    int temp;

    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        if (rem % 2 == 0)
        {
            esum = esum + rem;
        }
        else
        {
            osum = osum + rem;
        }
        temp = temp / 10;
    }
    printf("%d\n", esum);
    printf("%d\n", osum);
    return 0;
}