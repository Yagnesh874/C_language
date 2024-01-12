#include<stdio.h>
int main()
{
    char str[10]={'\0'};
    printf("Enter a string : ");
    gets(str);
    char ch;
    for(int i=0;str[i]!=0;i++){
        ch=str[i];
        printf("%c",ch);
    }
   return 0;
}