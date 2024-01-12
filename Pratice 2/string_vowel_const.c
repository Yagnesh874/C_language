#include <stdio.h>
int main()
{
    char str[10];
    int i;
    int count = 0;
    char c;
    int vowel=0;
    int con=0;
    printf("Enter a string : ");
    gets(str);
    printf("Enter a character  : ");
    scanf("%c", &c);
    for (i = 0; str[i] != 0; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else
        {
            con++;
        }
       
    }
      printf("%d\n", vowel);
        printf("%d\n", con);
    return 0;
}