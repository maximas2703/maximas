#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter any number:\n");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("%d\t",i);
			sum =sum+i;
		}
	}
	printf("\nsum of perfect number %d",sum);
	if(sum==n)
	{
		printf("\nit is a perfect number");
	}
	else
	{
		printf("\nit is not a perfect number");
	}
}
	
