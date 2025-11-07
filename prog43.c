// accept a 4 digit number and print if all the 4 digits are unique or not
#include <stdio.h>
void main()
{
	int n, d1, d2, d3, d4;
	printf("Enter a 4 digit number ");
	scanf("%d",&n);
	if (n>=1000 && n<=9999)
	{
		d1=n/1000;
		d2=(n%1000)/100;		//	d2=(n/100)%10;
		d3=(n%100)/10;			//  d3=(n/10)%10;
		d4=n%10;
		if (d1!=d2 && d1!=d3 && d1!=d4 && d2!=d3 && d2!=d4 && d3!=d4)
			printf("All 4 digits are unique");
		else 
			printf("number contains atlease one digit duplicate");
	}
	else
		printf("Input is not a 4 digit number");
}

