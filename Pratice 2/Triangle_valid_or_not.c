#include<stdio.h>
int main()
{
    int a,b,c;
    int sum;
    printf("Enter number 1 : ");
    scanf("%d", &a);
    printf("Enter number 2 : ");
    scanf("%d", &b);
    printf("Enter number 3 : ");
    scanf("%d", &c);
    sum=a+b+c;
    if(sum==180){
        printf("This is valid triangle");
    }
    else{
        printf("This is not valid triangle");
    }
    return 0;
}