#include <stdio.h>
int swapping(int firstnum, int secnum)
{
    int temp;
    temp = firstnum;
    firstnum = secnum;
    secnum = temp;
    printf("The value of firstnum is %d\n", firstnum);
    printf("The value of secnum is %d\n", secnum);
}
int main()
{
    int firstnum, secnum;
    printf("Enter a number 1 : ");
    scanf("%d", &firstnum);
    printf("Enter a number 1 : ");
    scanf("%d", &secnum);
    swapping(firstnum, secnum);
    return 0;
}