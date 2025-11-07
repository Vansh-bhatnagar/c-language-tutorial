// prime number or not:  A number that is divisible by 1 and itself ONLY
// OR in other words if a number has only 2 factors it is prime number
#include <stdio.h>	
void main()
{
	int n, c, factors;
	printf("Enter a number to test: ");
	scanf("%d",&n);
	factors=0;
	for(c=1;c<=n;c++)
	{
		if(n%c==0)		// checking if c is a factor of n or not
		{
			printf("\n %d is a factor",c);
			factors++;	
		}
	}
	if (factors==2)
		printf("\n%d is prime number",n);
	else
		printf("\n%d is composite number",n);
}
