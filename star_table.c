// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     int b=n;
//     int a=1;
//     for(i=1;i<=2*n+1;i++){
//         printf("*");
//     }
//     printf("\n");
//     for(i=1;i<=n;i++){
//         for(j=1;j<=b;j++){
//             printf("*");
//         }
//         for(k=1;k<=a;k++){
//             printf(" ");
//         }
//         for(j=1;j<=b;j++){
//             printf("*");
//         }
//         b-=1;
//         a+=2;
//         printf("\n");
//     }
//    return 0;
// }
#include <stdio.h>
int main()
{
    int n, i, j, k;
    int nst;
    int nsp = 1;
    printf("Enter a number : ");
    scanf("%d", &n);
    nst = n;
    for (i = 1; i <= 2 * n + 1; i++)
    {
        printf("*");
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= nst; j++)
        {
            printf("*");
        }
        nst -= 1;
        nsp += 2;
        printf("\n");
    }
    return 0;
}