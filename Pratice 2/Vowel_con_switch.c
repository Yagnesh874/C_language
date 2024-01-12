#include <stdio.h>
int main()
{
    char c;
    printf("Enter a characters : ");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("It is vowel");
        break;
    default:
        printf("It is consonant");
        break;
    }
    return 0;
}