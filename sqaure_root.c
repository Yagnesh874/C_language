#include <stdio.h>
#include <math.h>
int main()
{
    int firstnum;
    int powerofnum;
    printf("Enter a firstnum : ");
    scanf("%d", &firstnum);
    printf("Enter power of given number : ");
    scanf("%d", &powerofnum);
    int power = pow(firstnum, powerofnum);
    printf("The power of given number is  : %d", power);
    return 0;
}