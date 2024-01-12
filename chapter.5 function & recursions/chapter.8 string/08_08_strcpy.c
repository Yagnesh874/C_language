#include<stdio.h>
#include<string.h>
int main(){
    
    char s1 = "this";
    char s2[45];
    strcpy(s2,s1);
    printf("now the s2 is %s",s2);


    return 0;
}