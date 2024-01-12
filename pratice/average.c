#include<stdio.h>
int main(){

    int num1,num2,num3,sum;
    float avg;
    printf("enter the number");
    scanf("%d",&num1); 
    printf("enter the number");
    scanf("%d",&num2);
    printf("enter the number");
    scanf("%d",&num3);

    sum = num1 + num2 + num3;
    avg = sum/3;
    printf("the sum of three numbers %d\n",sum);
    printf("the average of three numbers %f\n",avg);   
    return 0;
}