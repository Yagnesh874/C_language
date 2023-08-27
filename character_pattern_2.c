#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a no.of rows : ");
    scanf("%d",&n);
    for(i=65;i<=75;i++){
        for(j=65;j<=i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
   return 0;
}