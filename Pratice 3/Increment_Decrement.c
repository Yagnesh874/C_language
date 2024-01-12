#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("value of n++ is %d\n",n++);
    printf("%d",n);
    printf("Value of ++n is %d\n",++n);
    printf("Value of n-- is %d\n",n--);
    printf("value of --n is %d\n",--n);
   return 0;
}