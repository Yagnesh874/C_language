// #include<stdio.h>
// int main()
// {
//     int n,i,j,k;
//     int a=1;
//     int ml=n/2+1;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(k=1;k<=a;k++){
//             printf("*");
//         }
//         if(i<ml){

//         }
//         printf("\n");
//     }
//    return 0;
// }

#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter a number : ");
    scanf("%d",&n);
    int nst=1;
    int nsp=n/2;
    int ml=n/2+1;
    for(i=1;i<=n;i++){
        for(j=1;j<=nsp;j++){
            printf(" ");
        }
        // nsp-=1;
        for(k=1;k<=nst;k++){
            printf("*");
        }
       if(i==ml){
        nsp--;
        nsp+=2;
       }
       else{
        nsp++;
        nsp-=2;
       }
       printf("\n");
    }
   return 0;
}