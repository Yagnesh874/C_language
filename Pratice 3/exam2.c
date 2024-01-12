#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        
        for(i=n;i>=0;i--){
            for(j=1;j<=i;j++){
                printf("%d",j);
            }
        }
            printf("\n");
    }
        return 0;
}