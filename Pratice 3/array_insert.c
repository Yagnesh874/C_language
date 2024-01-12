#include<stdio.h>
int main()
{
    int n;
    int arr[50];
    int pos;
    int value;
    printf("Enter a number : ");
    scanf("%d",&n);
     for(int i=0;i<n;i++){
        printf("Enter element of array is   %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter a position of a number : ");
    scanf("%d",&pos);
    printf("Enter the value : ");
    scanf("%d",&value);
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=value;
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
   return 0;
}