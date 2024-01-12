#include <stdio.h>
int main()
{
  int n;
  int arr[50];
  printf("Enter a number : ");
  scanf("%d", &n);
  int j, i;
  for (int i = 0; i < n; i++)
  {
    printf("Enter element of array is   %d : ", i + 1);
    scanf("%d", &arr[i]);
  }
  printf("Prime numbers are: \n");
  for (i = 0; i < n; i++)
  {
    int flag = 0;
    for (j = 2; j < arr[i]; j++)
    {
      if (arr[i] % j == 0)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      printf(" %d \t", arr[i]);
    }
  }
  // if(flag==0){
  //     printf(" %d is prime number\n",n);
  // }
  // else{

  //     printf(" %d The given number is composite\n",n);
  // }
  return 0;
}

// #include<stdio.h>
// int main()
// {
//   int n;
//   printf("Enter a number : ");
//   scanf("%d",&n);
//   int flag=0;
//   for(int i=2;i<=n-1;i++){
//     if(n%i==0){
//       flag=1;
//       break;
//     }
//   }
//   if(flag==0){
//     printf("prime number ");
//   }
//   else{
//     printf(" the given number is composite ");

//   }
//    return 0;
// }