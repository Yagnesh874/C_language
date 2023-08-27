#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=a;k++){
            int d=a+64;
            char ch='A';
            printf("%c",ch);
            
        //    ch++;
        }
            a+=1;
        printf("\n");
    }
   return 0;
}