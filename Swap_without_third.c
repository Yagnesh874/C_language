#include <stdio.h>
int swapping(int firstnum, int secnum)
{
    firstnum = firstnum + secnum;
    secnum = firstnum - secnum;
    firstnum = firstnum - secnum;
    printf("The first number is %d\n", firstnum);
    printf("The second number is %d\n", secnum);
}
int main()
{
    int firstnum, secnum;
    printf("Enter a number 1 : ");
    scanf("%d", &firstnum);
    printf("Enter a number 2 : ");
    scanf("%d", &secnum);
    swapping(firstnum, secnum);
    return 0;
}