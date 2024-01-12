
#include <stdio.h>

int main()
{   long int n,i,t=1;
	int sum =0;
	printf("Enter a number : ");
	scanf("%ld",&n);
	for (i=1;i<=n;i++)
	{  sum +=t;
	  printf("%ld   ",t);
	  t=t*10+1;
	}
	printf("\nThe sum of the series = %d \n",sum);
    return 0;
}