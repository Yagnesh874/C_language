#include<stdio.h>
int main()
{
    char str[20]={'\0'};
    int length=0;
    printf("Enter a string : ");
    gets(str);
    for(int i=0;i<=str[i];i++){
        length++;
    }
    printf("%d",length);
   return 0;
}