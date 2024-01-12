#include<stdio.h>
int main(){
    
    int a[5],i;
    printf("enter the array element");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("reverse array element",a[i]);
    for(i=4;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}

