#include<stdio.h>
int main()
{
    int flag=0,no;
    printf("Enter a number : ");
    scanf("%d",&no);
    for(int i=2;i<no;i++){
        if(no%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Prime number");
    }
    else
    {
        printf("not prime number ");
    }
   return 0;
}