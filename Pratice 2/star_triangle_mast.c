// #include <stdio.h>
// int main()
// {
//     int n, i, j, k;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         for (j = 1; j <= n - i; j++)
//         {
//             printf(" ");
//         }
//         for (k = 1; k <= i; k++)
//         {
//             printf("%d",k);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter a number  : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}