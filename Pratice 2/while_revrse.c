#include<stdio.h>
int main()
{
    int n;
    int i;
    int rem=0;
    int rev=0;
    printf("Enter a number  : ");
    scanf("%d",&n);
    i=n;
    while (i>0)
    {
            rem=i%10;
            rev=rev+(rev*10);
            i=i/10;
    }
   if(rev==i){
    printf("Palidrome number");
   }
   else{
    printf("Not palidrome number");
   }
    
   return 0;
}