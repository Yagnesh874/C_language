#include <stdio.h>
int main()
{
    char str[20] = {'\0'};
    char c;
    int count = 0;
    printf("Enter a string : ");
    gets(str);
    printf("Enter a charachter  : ");
    scanf("%c", &c);
    for (int i = 0; i <= str[i]; i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}