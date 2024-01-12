#include <stdio.h>
int main()
{
    int n;
    int temp;
    int rem = 0;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        rem = temp % 10;
        count++;
        temp = temp / 10;
    }
    printf("%d", count);
    return 0;
}