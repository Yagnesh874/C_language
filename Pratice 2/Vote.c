#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    (n > 18) ? printf("Eligiable for vote") : printf("Eligiable for not vote");
    return 0;
}