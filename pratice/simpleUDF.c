#include<stdio.h>
void sim();
int main()
    {
        sim();
    }
void sim()
{
    float p,r,n,si;
    printf("enter the value");
    scanf("%f %f %f",&p,&r,&n);
    si = (p*r*n)/100;
    printf("%f is simple interest",si);
}    
