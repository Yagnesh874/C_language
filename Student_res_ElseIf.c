#include <stdio.h>
int main()
{
    int a, b, c;
    int tot;
    printf("Enter The marks of subject 1 : ");
    scanf("%d", &a);
    printf("Enter The marks of subject 2 : ");
    scanf("%d", &b);
    printf("Enter The marks of subject 3 : ");
    scanf("%d", &c);
    tot = a + b + c;
    printf("%d is total number of marks\n", tot);
    int per = (float)tot / 300 * 100;
    printf("%d  is percentage\n ", per);
    if (per > 91 && per <= 100)
    {
        printf("Excellent");
    }
    else if (per > 81 && per <= 90)
    {
        printf("Very good");
    }
    else if (per > 71 && per >= 80)
    {
        printf("Good");
    }
    else if (per > 61 && per >= 70)
    {
        printf("Can do better");
    }
    else if (per > 51 && per >= 60)
    {
        printf("Average");
    }
    else if (per > 41 && per >= 50)
    {
        printf("Below average");
    }
    else
    {
        printf("You are fail");
    }
}