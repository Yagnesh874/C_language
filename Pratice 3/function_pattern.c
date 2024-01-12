#include<stdio.h>
void pattern(){
    for(int i=1;i<=10;i++){
        printf("*");
    }
    printf("\n");
}
int main()
{
    pattern();
    printf("hello world");
    pattern();
   return 0;
}