#include <stdio.h>
int main()
{
    
    char c;
    printf("Enter a characters : ");
    scanf("%c", &c);
    if (c >= 97 && c <= 122)
    {
        printf("This is alphabet");
    }
    else if (c >= 65 && c <= 90)
    {
        printf("This is alphabet");
    }
    else
    {
        printf("no alphabet");
    }
    return 0;
}