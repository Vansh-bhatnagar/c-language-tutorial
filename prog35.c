//  Accept a 2 digit number and print the relation between 1st and 2nd digits
//	48	digit1<digit2	86	digit1>digit2	88  digit1 equal to digit2	others invalid
#include <stdio.h>
void main()
{
	int n;
	printf("enter a 2 digit number ");
	scanf("%d",&n);
	printf("\n quotient is %d,    remainder is %d",n/10,n%10);
}
