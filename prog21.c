// using bitwise operators
#include <stdio.h>
void main()	
{
	int a=10, b=12;
	printf("\n   %d ",(a&b));
	printf("\n   %d ",(a|b));
	printf("\n   %d ",(a^b));
	a=25;
	printf("\n      %d",(a<<1));	// left shift by 1 bit will make it double
	printf("\n      %d",(a<<2));	// left shift by 2 bit will make it double
	
	a=70;
	printf("\n      %d",(a>>1));	// right shift by 1 bit will make it half
	printf("\n      %d",(a>>2));	// right shift by 2 bit will make it half
}
