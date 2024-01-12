#include<stdio.h>
int main()
{
    char str[10];
    char rev[10];
    printf("Enter a string : ");
    gets(str);
    int i,j;
    int length;
    for(i=0;str[i]!=0;i++){
        length++;
        
    }
    length--;
    for(i=length,j=0;i>=0;i--,j++){
        rev[j]=str[i];
    }
    printf("%s",rev);
   return 0;
}