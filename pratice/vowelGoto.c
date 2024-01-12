#include<stdio.h>
int main(){

    char c;
    printf("enter the alphabet");
    scanf("%c",&c);

    if(c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        goto vowel;
    }
    else
    {
        goto consonant;
    }
    vowel:
        printf("%c is vowel",c);
         return 0;
    consonant:
        printf("%c is consonant",c);
        return 0;
}