#include <stdio.h>
#define rows 2
#define cols 2
int main()
{
   int arr[rows][cols];
   int brr[rows][cols];
   int i,j;
   for ( i = 0; i < rows; i++)
   {
      for ( j = 0; j < cols; j++)
      {
         printf("Enter element (%d , %d): ", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
   for ( i = 0; i < rows; i++)
   {
      for ( j = 0; j < cols; j++)
      {
         printf("Enter element (%d , %d): ", i, j);
         scanf("%d", &brr[i][j]);
      }
   }
   for ( i = 0; i < rows; i++)
   {
      for ( j = 0; j < cols; j++)
      {
         arr[i][j] = arr[i][j] + brr[i][j];
      }
      printf("%d", arr[i][j]);
   }
   return 0;
}