#include<stdio.h>
int od_ev(int a){
    if(a%2==0) printf(" is even ");
    else printf(" is odd number ");
    return a;
}
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int b=od_ev(n);
    printf("%d",b);
   return 0;
}