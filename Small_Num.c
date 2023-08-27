#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter The age of ram : ");
    scanf("%d", &a);
    printf("Enter The age of shyam : ");
    scanf("%d", &b);
    printf("Enter The age of ajay : ");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        printf(" Ram is youngest");
    }
    if (b < a && b < c)
    {
        printf(" Shyam is youngest");
    }
    if (c < a && c < b)
    {
        printf(" Ajay is youngest");
    }
}