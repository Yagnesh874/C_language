#include<stdio.h>
int main()
{
    int arr[5];
    int max=0;
    for(int i=0;i<5;i++){
        printf("Enter element of array is %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    // int min=arr[0];
    // for(int i=1;i<=4;i++){
    //     if(arr[i]<=min){
    //         min=arr[i];
    //     }
    // }
    printf("%d",max);
    // printf("%d",min);
   return 0;
}