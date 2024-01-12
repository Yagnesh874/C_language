#include<stdio.h>
int main()
{
    int arr[7];
    int i=0;
    int j=6;
    int temp=0;
    for(int i=0;i<=6;i++){
        printf("Enter element of array is %d : ", i);
        scanf("%d", &arr[i]);
    }
    while (i<j)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<=6;i++)
    {
        printf("%d ",arr[i]);
    }
    
   return 0;
}