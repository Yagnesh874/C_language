#include<stdio.h>
int main()
{
    int a[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter element of array is %d : ",i+1);
        scanf("%d",&a[i]);
    }
   return 0;
}