#include<stdio.h>
int main()
{
    char str[10];
    int i;
    printf("Enter a string : ");
    gets(str);
    printf("%c",str[0]);
    for(i=0;str[i]!=0;i++){
        if(str[i]==' '){
            i++;
            printf("%c",str[i]);
        }
    }
   return 0;
}