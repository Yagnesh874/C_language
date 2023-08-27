#include <stdio.h>

int main()
{
    char ch;
    printf("Please enter any alphabet ");
    scanf("%c", &ch);
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n %c is alphabet", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("\n %c is digit", ch);
    }
    else
    {
        printf("\n %c is not alphabet or not digit", ch);
    }
    return 0;
}