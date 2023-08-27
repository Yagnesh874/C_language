#include<stdio.h>
int main()
{
    int r, c;
    int i,j;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of column : ");
    scanf("%d", &c);
    int arr[r][c];
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("Enter the element (%d,%d): ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    int max=arr[0][0];
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    printf("%d\n",max);
    // printf("(%d ,%d)",i,j);
   return 0;
}
















// / #include <stdio.h>

// #define ROWS 3
// #define COLS 4

// int main() {
//     int arr[ROWS][COLS] = {
//         {5, 12, 8, 3},
//         {10, 6, 4, 2},
//         {9, 11, 7, 1}
//     };

//     int maxElement = arr[0][0];  // Assume the first element is the maximum

//     // Iterate through each element in the array
//     for (int i = 0; i < ROWS; i++) {
//         for (int j = 0; j < COLS; j++) {
//             // Compare the current element with the maximum element
//             if (arr[i][j] > maxElement) {
//                 maxElement = arr[i][j];  // Update the maximum element
//             }
//         }
//     }
//     printf("The maximum element in the array is: %d\n", maxElement);


//     return 0;
// }
