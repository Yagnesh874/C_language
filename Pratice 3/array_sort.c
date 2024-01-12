#include<stdio.h>
int main()
{
    int n;
    int arr[50];
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("Enter array element of array is  %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<=n;i++){
        printf("%d\t",arr[i]);
    }
   return 0;
}