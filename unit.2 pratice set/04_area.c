#include<stdio.h>
int main(){

    float length,width,area;
    printf("enter the length");
    scanf("%f",&length);
    printf("enter the width");
    scanf("%f",&width);
    area = length * width;
    printf("%f is area of a number",area);   
    return 0;
}