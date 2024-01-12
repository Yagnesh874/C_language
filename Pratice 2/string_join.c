#include <stdio.h>
int main()
{
    char str[10] = {'\0'};
    char str2[10] = {'\0'};
    char str3[20];
    int j = 0;
    int i;
    printf("Enter a string 1 : ");
    gets(str);
    printf("Enter a string 2 : ");
    gets(str2);
    for (i = 0; i<str[i]; i++, j++)
    {
        str3[j] = str[i];
    }
    for (i = 0; i<str2[i]; i++, j++)
    {
        str3[j] = str2[i];
    }
    printf("%s", str3);
    return 0;
}