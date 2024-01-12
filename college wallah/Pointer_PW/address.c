#include<stdio.h>
int main()
{
    // int a=5;
    // int b=5;
    //int* x=&a;
    // printf("%p\n",&a);
    //printf("%p\n",&x);
    // printf("%p\n",&b);
    int a=23;
    int* x=&a;
    // printf("%p\n",&a);
    printf("%d\n",*x);
   return 0;
}