#include<stdio.h>
int main()
{
    int i,j,rows,cols;
    printf("Enter a rows : ");
    scanf("%d",&rows);
    printf("Enter a rows : ");
    scanf("%d",&cols);
    int arr[rows][cols];
    int brr[rows][cols];
    int sum=0;
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter element of array is (%d,%d) : ",i,j);
            scanf("%d",&arr[i][j]);
            printf("Enter element of array is (%d,%d) : ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum=arr[i][j]+brr[i][j];
        }
    }
   for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",sum);
        }
        printf("\n");
   }
   return 0;
}

// #include<stdio.h>
// int main()
// {
//     int r,c;
//      printf("Enter number of rows : ");
//     scanf("%d", &r);
//     printf("Enter number of column : ");
//     scanf("%d", &c);
//     int arr[r][c];
//     // int brr[r][c];
//     int sum=0;
//      for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             printf("Enter the element (%d,%d): ",i,j);
//             scanf("%d", &arr[i][j]);
//             // scanf("%d", &brr[i][j]);
//         }
//     }
//     //  for (int i = 0; i < r; i++)
//     // {
//     //     for (int j = 0; j < c; j++)
//     //     {
//     //         printf("Enter the element : ");
//     //     }
//     // }
//      for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//         {
//             sum=sum+arr[i][j];
//         }
//         printf("%d\n",sum);
//     }
//    return 0;
// }