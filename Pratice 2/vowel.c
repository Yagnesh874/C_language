#include <stdio.h>
int main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c", &c);
    if (c == 'a' || c == 'A' || c == 'i' || c == 'I' || c == 'e' || c == 'E' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
    {
        printf("%c is vowel", c);
    }
    else
    {
        printf("%c is consonant", c);
    }
    return 0;
}