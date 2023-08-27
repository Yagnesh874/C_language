#include <stdio.h>
int main()
{
    int l;
    printf("Enter the length : ");
    scanf("%d", &l);
    int b;
    printf("Enter the breadth : ");
    scanf("%d", &b);
    int n = l * b;
    int p = 2 * (l + b);
    printf("The value of area circle is %d\n", n);
    printf("The area of perameter is %d\n", p);
    if (n > p)
    {
        printf("The area is greater than perameter");
    }
    else
    {
        printf("The area is not greater than perameter");
    }
    if (n == p)
    {
        printf("The area and perimeter are the same");
    }
}