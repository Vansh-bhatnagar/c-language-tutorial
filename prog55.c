// Accept 2 values and print all prime numbers only between the given range
#include <stdio.h>	
void main()
{
	int x, y, n, c, factors;
	printf("Enter starting and ending values: ");
	scanf("%d%d",&x,&y);	//	10	20
	for(n=x;n<=y;n++)
	{
		factors=0;
		for(c=1;c<=n;c++)
		{
			if(n%c==0)		// checking if c is a factor of n or not
			{
				// printf("\n %d is a factor",c);
				factors++;	
			}
		}
		if (factors==2)
			printf("\n%d is prime number",n);
//		else
//			printf("\n%d is composite number",n);
	}
}
