#include <stdio.h>
void circle(float r);
void square(int n);
void triangle(int b, int h);
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d", &a);
    // printf("Enter a number : ");
    // scanf("%d", &b);
    square(a);
    // circle(a);
    // triangle(a, b);
    return 0;
}

void square(int n)
{
    n = n * n;
    printf("%d", n);
}

void circle(float r)
{
    r = 3.14 * r * r;
    printf("%f", r);
}
void triangle(int b, int h)
{
    int tri = b * h;
    printf("%d", tri);
}