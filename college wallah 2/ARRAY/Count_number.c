#include<stdio.h>
int main()
{
    int arr[5],count=0;
    int x=4;
    for(int i=0;i<5;i++){
        printf("Enter element of array is %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]>=x){
            // count++;
        printf("%d ",arr[i]);
        }
    }
   return 0;
}