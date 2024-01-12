#include <stdio.h>
int getsum(int firstnum, int secnum)
{
    return firstnum + secnum;
}
int main()
{
    int firstnum, secnum;
    printf("Enter a number 1 : ");
    scanf("%d", &firstnum);
    printf("Enter a number 2 : ");
    scanf("%d", &secnum);
    int addtwonum = getsum(firstnum, secnum);
    printf("%d", addtwonum);
    return 0;
}