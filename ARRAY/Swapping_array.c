#include<stdio.h>
int main()
{
    int arr[20], temp=0;
    arr[0]=100;
    arr[19]=200;
    temp=arr[19];
    arr[19]=arr[0];
    arr[0]=temp;
    printf("%d %d\n",arr[0],arr[19]);
   return 0;
}