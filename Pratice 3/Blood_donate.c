#include <stdio.h>
int main()
{
    int age, weight;
    printf("Enter the age : ");
    scanf("%d", &age);
    printf("Enter the weight : ");
    scanf("%d", &weight);
    if (age >= 18 && age <= 55 && weight >= 45)
    {
        printf("You are   eligibale for blood donate");
    }
    else
    {
        printf("You are  not eligibale for blood donate");
    }

    return 0;
}