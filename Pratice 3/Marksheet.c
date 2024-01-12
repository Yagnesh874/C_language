#include <stdio.h>
int main()
{
    int n, a, b, c;
    printf("Enter marks of subject 1 : ");
    scanf("%d", &a);
    printf("Enter marks of subject 2 : ");
    scanf("%d", &b);
    printf("Enter marks of subject 3 : ");
    scanf("%d", &c);
    n = a + b + c;
    float per = (float)n / 3;
    printf("total marks is %d\n", n);
    printf("Total percentage is %f\n", per);
    return 0;
}