#include <stdio.h>
void table(int n);
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    table(a);
    // printf("%d",a);
    return 0;
}
void table(int n)
{
    for ( int i = 1; i <= 10; i++)
    {
        printf("%d\n",i*n);
    }
}