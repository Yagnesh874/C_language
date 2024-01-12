#include<stdio.h>
#include<string.h>
int main(){
    char s1[10],s2[10];
    gets (s1);
    strcpy(s2,s1);
    printf("%s\n",s1);
    printf("%s\n",s2);
}