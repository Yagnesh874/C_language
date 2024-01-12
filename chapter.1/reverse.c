#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<=4;i++)
	{
		printf("enter array value");
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

