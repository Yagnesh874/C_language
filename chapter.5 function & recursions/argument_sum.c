#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    int b;
    printf("Enter  number 2 : ");
    scanf("%d", &b);
    int sum = add(a, b);
    printf("The sum is %d", sum);
    return 0;
}