#include<stdio.h>
int main()
{
    char str[20]={'\0'};
    printf("Enter a string  : ");
    gets(str);
    printf("%s ",str);
   return 0;
}