#include<stdio.h>
void add(){
     int n;
    printf("Enter a number  : ");
    scanf("%d",&n);
    int sum=0;
    int i;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("%d",sum);
}
int main()
{
    add();
   return 0;
}