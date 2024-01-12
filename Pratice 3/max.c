#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int max=0;
    for(i=0;i<=4;i++){
        printf("Enter element : ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=4;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
        printf("%d",max);
   return 0;
}