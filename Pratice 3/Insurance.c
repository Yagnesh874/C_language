#include <stdio.h>
int main()
{
    long int n;
    int ans;
    int c;
    printf("Enter a car values  : ");
    scanf("%ld", &n);
    printf("1 A category of insurance comapny\n");
    printf("2 B category of insurance comapny\n");
    printf("3 C category of insurance comapny\n");
    printf("Enter you choice : ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        ans = 0.02 * n;
        printf("The premium is %d\n", ans);
        break;
    case 2:
        ans = 0.03 * n;
        printf("The premium is %d\n", ans);
        break;
    case 3:
        ans = 0.05 * n;
        printf("The premium is %d\n", ans);
        break;
    default:
        printf("wrong input\n");
        break;
    }
    return 0;
}