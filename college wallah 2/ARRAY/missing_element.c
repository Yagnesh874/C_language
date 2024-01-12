#include<stdio.h>
int main()
{
    int arr[10];
    int totNum;
    int sum=0;
    for(int i=0;i<=9;i++){
         printf("Enter element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
   totNum=(10/2)*(10+1);
   printf("%d",totNum);
   for(int i=0;i<=9;i++){
    sum=sum+arr[i];
   }
   totNum-sum;     
   return 0;
}