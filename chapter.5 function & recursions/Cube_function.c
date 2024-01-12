#include <stdio.h>
void cube(int n);
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);
    cube(a);
    return 0;
}
void cube(int n)
{
    n = n * n * n;
    printf("The cube is %d\n", n);
}