#include<stdio.h>
int main()
{
    char c,d;
    for(c='A';c<='E';c++)
    {
        for(d='A';d<='E';d++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}