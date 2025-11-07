// accept a 4 digit number and print the relation between 
//  the sum of first 2 digits and the sum of last 2 digit
#include <stdio.h>
void main()
{
	int n, d1, d2, d3, d4;
	printf("Enter a 4 digit number ");
	scanf("%d",&n);
	if (n>=1000 && n<=9999)
	{
		d1=n/1000
		d2=(n%1000)/100;		//	d2=(n/100)%10;
		d3=(n%100)/10;			//  d3=(n/10)%10;
		d4=n%10;
		if (d1+d2 > d3+d4)
			printf("sum of first 2 digits is more than sum of last 2 digits");
		else if (d1+d2 < d3+d4)
			printf("sum of first 2 digits is less than sum of last 2 digits");
		else
			printf("sum of first 2 digits is equal to sum of last 2 digits");
	}
	else
		printf("Input is not a 4 digit number");
}

