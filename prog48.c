// accept a number n, and calculate the sum of numbers upto n
#include <stdio.h>
void main()
{
	int c, n, sum;

	printf("enter a number: ");
	scanf("%d",&n);
/*	sum=0;
	for(c=1 ; c<=n ; c++)
	{
		sum=sum+c;
	}
	printf("sum of numbers from 1 to %d is %d",n,sum);  */
	sum=n*(n+1)/2;    // formula to calculate sum to n terms
	printf("sum of numbers from 1 to %d is %d",n,sum);
}
