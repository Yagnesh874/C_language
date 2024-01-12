#include <stdio.h>
int main()
{
    char c;
    printf("Enter a characters : ");
    scanf("%c", &c);
    if (c >= 97 && c <= 122)
    {
        printf("It is alphabet");
    }
    else if (c >= 65 && c <= 90)
    {
        printf("It is alphabet");
    }

    else
    {

        printf("It is not  alphabet");
    }
    return 0;
}