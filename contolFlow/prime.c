
#include <stdio.h>

int isPrime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int numbers[10] = {1, 20, 3110, 4, 55, 6, 77, 8, 9, 10};

    printf("Prime numbers in the array: ");
    for (int i = 0; i < 10; i++)
    {
        if (isPrime(numbers[i]))
        {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");
}