#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ans, a, b;
    printf("Enter a number 1 : ");
    scanf("%d", &a);
    printf("Enter a number 1 : ");
    scanf("%d", &b);
    printf("1+.additon\n");
    printf("2-.substraction\n");
    printf("3*.multipication\n");
    printf("4/.diviosn\n");
    printf("5.modulo\n");
    printf("6.Exit\n");
    printf("Enter your choice\n");
    scanf("%d", &ans);
    switch (ans)
    {
    case 1:
        ans = a + b;
        printf("Addition is %d", ans);
        break;
    case 2:
        ans = a - b;
        printf("Substraction is %d", ans);
        break;
    case 3:
        ans = a * b;
        printf("multiplication is %d", ans);
        break;
    case 4:
        ans = a / b;
        printf("divison is %d", ans);
        break;
    case 5:
        ans = a % b;
        printf("module is %d", ans);
        break;
    case 6:
        exit(0);
    default:
        printf("Invalid choice");
    }
    return 0;
}