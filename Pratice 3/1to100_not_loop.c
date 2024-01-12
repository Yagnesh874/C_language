#include<stdio.h>
int main()
{
    static int n=1;
    if(n<=100){
        printf("%d ",n++);
        main();
    }
   return 0;
}