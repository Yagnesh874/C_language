#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a number 1 : ");
    scanf("%d", &a);
    printf("Enter a number 2 : ");
    scanf("%d", &b);
    printf("Enter a number 3 : ");
    scanf("%d", &c);
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d is maximum number", max);
    return 0;
}
