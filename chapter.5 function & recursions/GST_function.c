#include<stdio.h>
void gst(float value);
int main()
{
   float a;
   printf("Enter the price of product : ");
   scanf("%f",&a); 
   gst(a);
   return 0;
}
void gst(float value){
    value = value +(0.18 * value);
    printf("The value is %f",value);
}