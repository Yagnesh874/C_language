// #include<stdio.h>
// int main()
// {
//     int n,i,j;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     int k=1;
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("%d ",k);
//             k++;
//         }
//         printf("\n");
//     }
//    return 0;
// }
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int k=1;
        for(j=1;j<=i;j++){
            printf("%d ",k);
            k=k+2;
        }
        printf("\n");
    }
   return 0;
}