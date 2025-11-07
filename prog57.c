// Accept 2 values and print all prime numbers only between the given range
#include <stdio.h>	
void main()
{
	int k, n, c, factors;
	printf("Enter how many prime numbers to print: ");
	scanf("%d",&k);   // 5  4  3  2  1  0
	for(n=2;k>=1;n++) // 2  3  4  5   6  7  8  9   10   11
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
		{
			printf("\n%d is prime number",n);  //  2 3  5  7   11
			k--;
		}
	}
}
