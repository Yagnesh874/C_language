#include<stdio.h>
int main(){

    float pi,radius,area;
    printf("enter the radius");
    scanf("%f",&radius);
    area = pi * radius * radius;
    printf("%f is circumference number",area);     
    return 0;
}