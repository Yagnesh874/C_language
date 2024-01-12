#include <stdio.h>
int main()
{
    float a, i, c, f;
    char b;
    printf("Enter a characters : ");
    scanf("%c", &b);
    printf("Enter celsius : ");
    scanf("%f", &c);
    printf("Enter fernhit : ");
    scanf("%f", &f);
    if (b == 'c')
    {
        a = (c * 9 / 5) + 32;
    }
    else if (b == 'f')
    {
        i = (f - 32) * 5 / 9;
    }
    else
    {
        printf("Does not exit");
    }
    printf("%f\n", a);
    printf("%f\n", i);
    return 0;
}