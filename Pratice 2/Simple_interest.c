#include <stdio.h>
int main()
{
    int amount, rate, time;
    printf("Enter the amount : ");
    scanf("%d", &amount);
    printf("Enter the rate : ");
    scanf("%d", &rate);
    printf("Enter the time : ");
    scanf("%d", &time);
    float simple = (float)(amount * rate * time) / 100;
    printf("The simple interest is %f", simple);
    return 0;
}