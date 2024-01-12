#include<stdio.h>
int main()
{
    int rem=0,n,sum=0,sum1=0;
    int i;
    printf("Enter a number  : ");
    scanf("%d",&n);
    i=n;
    while(i>0){
        rem=i%10;
        if(rem%2==0){
            sum=sum+rem;
        }
        else{
            sum1=sum1+rem;
        }
            i=i/10;
    }
        printf("%d\n",sum);
        printf("%d\n",sum1);
   return 0;
}