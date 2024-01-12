#include<stdio.h>
int main()
{
    int n;
    int arr[50];
    int pos;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter element of array is   %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter a positon : ");
    scanf("%d",&pos);
    if(pos>=n+1){
        printf("deleete element is not possible");
    }
    else{
        for(int i=pos-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d\n",arr[i]);
    }
   return 0;
}