#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    switch (n%2==0)
    {
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
        printf("Even number");
        break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        printf("Odd number");
        break;
        default:printf("Wrong input");
        // break;

    }
   return 0;
}