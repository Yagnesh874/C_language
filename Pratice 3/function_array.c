#include<stdio.h>

int array(int a[],int size){
    int sum=0;
    int i;
    for(i=0;i<size;i++){
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int i,size;
    int arr[10];
    int addition=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    printf("Enter array elemnt of array : ");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
     addition=array(arr,size);
    printf("The addition is %d",addition);
   return 0;
}