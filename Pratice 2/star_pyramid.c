#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=a;j++){
            printf("*");
        }
        a=a+2;
        printf("\n");
    }
   return 0;
}