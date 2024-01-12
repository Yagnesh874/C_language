#include<stdio.h>
int main()
{
    int n,i;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=100;i<=n;i++){
        if(i%9==0){
            printf("%d\n",i);
            sum=sum+i;
        }
    }
            printf("The sum is %d\n",sum);
   return 0;
}