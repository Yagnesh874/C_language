#include<stdio.h>
int main(){

    int num;
    printf("enter the number");
    scanf("%d",&num);

    if(num>0)
    {
        goto positive;
    }
    else
    {
        goto negative;
    }
    positive:
        printf("%d is positive number",num);
         return 0;
    negative:
        printf("%d is negative number",num); 
         return 0;    
    return 0;
}