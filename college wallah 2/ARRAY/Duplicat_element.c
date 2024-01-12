#include<stdio.h>
int main()
{
    int arr[7];
    int i,j;
    for(i=0;i<7;i++){
        printf("Enter element of array is %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<7;i++){
        for(j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                printf("%d is duplicat element in this array\n",arr[i]);
                break;
            }
        }
    }
   return 0;
}