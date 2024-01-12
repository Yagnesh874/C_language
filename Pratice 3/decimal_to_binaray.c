#include<stdio.h>
int main()
{
    int n;
   int i;
   int a[10];
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d ",a[j]);
    }
   return 0;
}