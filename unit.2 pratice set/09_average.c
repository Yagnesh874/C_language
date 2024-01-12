#include<stdio.h>
int main(){

    int a,b,c,d,e,sum=0,avg;
    printf("enter the number");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum = a + b + c + d + e;
    avg = sum/3;
    printf("%d is average number",avg);    
    return 0;
}