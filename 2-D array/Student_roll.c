#include<stdio.h>
#define ROWS 4
#define COLS 2
int main()
{
    int arr[ROWS][COLS];
    int i,j;
    for(i=0;i<ROWS;i++){
        printf("Enter a student %d\n",i+1);
        printf("Enter a roll number : \n");
        scanf("%d",&arr[i][0]);
        printf("Enter a student marks : \n");
        scanf("%d",&arr[i][1]);
    }
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLS;j++){
            printf("%d\t\t",arr[i][j]);
        }
        printf("\n");
    }
   return 0;
}
// #include <stdio.h>

// #define ROWS 4
// #define COLS 2

// int main() {
//     int matrix[ROWS][COLS];
//     int i, j;

//     // Input roll numbers and marks
//     printf("Enter Roll No. and Marks for 4 students:\n");
//     for (i = 0; i < ROWS; i++) {
//         printf("Student %d:\n", i + 1);
//         printf("Roll No.: ");
//         scanf("%d", &matrix[i][0]);
//         printf("Marks: ");
//         scanf("%d", &matrix[i][1]);
//     }

//     // Display roll numbers and marks
//     printf("\nRoll No.\tMarks\n");
//     for (i = 0; i < ROWS; i++) {
//         for (j = 0; j < COLS; j++) {
//             printf("%d\t\t", matrix[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
