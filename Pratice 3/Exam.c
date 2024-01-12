#include<stdio.h>
int main()
{
    int unit;
    int charge=0;
    int amount=0;
    printf("Enter a unit : ");
    scanf("%d",&unit);
    if(unit>=50){
        amount=50*0.50;
        unit=unit-50;
    }
    printf("%d",amount);
    printf("%d",unit);
    // else if(unit>=100){
    //     amount=100*0.75;
    //     unit=unit-100;
        
    // }
    // else if(unit>=100){
    //     amount=100*1.20;
    //     unit=unit-100;
    // }
    //  else if(unit>=250){
    //     amount=100*1.50;
    //     unit=unit-250;
    // }
    // charge=
   return 0;
}