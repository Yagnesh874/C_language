#include<stdio.h>
int main()
{
    int arr[5];
    int i;
    int esum=0;
    int osum=0;
    for(i=0;i<5;i++){
        printf("Enter array element is %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(i%2==0){
            esum=esum+i;
        }
        else{
            osum=osum+i;
        }
    }
    printf("%d",esum);
    printf("%d",osum);
   return 0;
}