#include <stdio.h>
int main()
{
    int n1, n2;
    int n3, n4;
    int sum = 0;
    int sum1 = 0;
    printf("Enter number 1 : ");
    scanf("%d", &n1);
    printf("Enter number 2 : ");
    scanf("%d", &n2);
    printf("Enter number 3 : ");
    scanf("%d", &n3);
    printf("Enter number 4 : ");
    scanf("%d", &n4);
    printf("(%d + %di)\n", n1, n2);
    printf("(%d + %di)\n", n3, n4);

    sum = n1 + n3;
    sum1 = n2 + n4;
    printf("The sum is : %d\n", sum);
    printf("The sum 1 is : %d\n", sum1);

    printf("(%d + %di)", sum, sum1);
    return 0;
}

// #include <stdbool.h>
// #include <stdio.h>

// // This function is to check
// // if a given number is prime
// bool isPrime(int n)
// {
//     // since 0 and 1 is not prime
//     // number return false.
//     if (n == 1 || n == 0)
//         return false;

//     // Run a loop from 2 to n/2
//     for (int i = 2; i <= n / 2; i++) {

//         // if the number is divisible by i, then n is not a
//         // prime number, otherwise n is prime number.
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// // Driver code
// int main()
// {
//     int N = 50;

//     // check for the every number from 1 to N
//     for (int i = 1; i <= N; i++) {

//         // check if i (current number) is prime
//         if (isPrime(i)) {
//             printf("%d ", i);
//         }
//     }
//     return 0;
// }
