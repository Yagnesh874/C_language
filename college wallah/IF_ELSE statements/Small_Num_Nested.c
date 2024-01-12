#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter The age of ram : ");
    scanf("%d", &a);
    printf("Enter The age of shyam : ");
    scanf("%d", &b);
    printf("Enter The age of ajay : ");
    scanf("%d", &c);
    if (a < b)
    {
        if (a < c)
        {
            printf(" Ram is young" );
        }
        else
        {
            printf(" Ajay is young" );
        }
    }
    else
    {
        if (b < c)
        {
            printf(" Shyam is young" );
        }
        else
        {
            printf("  Ajay is young");
        }
    }
}