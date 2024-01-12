#include <stdio.h>
int main()
{
    int fer;
    printf("Enter number : ");
    scanf("%d", &fer);
    float celsuis = (float)(fer - 32) * 5 / 9;
    printf("%f", celsuis);
    return 0;
}