
#include <stdio.h>
int main()
{
   int arr[5], i;
   int j = 4;
   for (i = 0; i < 5; i++)
   {
      printf("Enter element of array is %d : ", i + 1);
      scanf("%d", &arr[i]);
   }
   for (i = 0; i < 5; i++)
   {
      while (i < j)
      {
         int temp = arr[i];
         arr[i] = arr[j];
         arr[j] = temp;
         i++;
         j--;
      }
   }
   for (i = 0; i < 5; i++)
   {
      printf("%d ", arr[i]);
   }
   return 0;
}