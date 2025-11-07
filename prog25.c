// program to check if a given number is even or odd number
#include <stdio.h>
void main()
{
	int n, d;
	printf("enter a number ");
	scanf("%d",&n);
//	printf("\n Quotient is %d, remainder is %d",(n/2),(n%2));
	if (n%2==0)
		printf("\n Even number");
	else
		printf("\n Odd number");
		
	if (n%2==1)
		printf("\n Odd number");
	else
		printf("\n Even number");
		
	if (n%2!=0)
		printf("\n Odd number");
	else
		printf("\n Even number");
		
	if (n%2!=1)
		printf("\n Even number");
	else
		printf("\n Odd number");
	printf("\n---------------------------------------");
	if (!(n%2==0))
		printf("\n Odd number");
	else
		printf("\n Even number");
		
	if (!(n%2==1))
		printf("\n Even number");
	else
		printf("\n Odd number");
		
	if (!(n%2!=0))
		printf("\n Even number");
	else
		printf("\n Odd number");
		
	if (!(n%2!=1))
		printf("\n Odd number");		
	else
		printf("\n Even number");
	printf("\n=========================================");
	
	d=n%10;		// to get the last digit from the given number
	if (d==0 || d==2 || d==4 || d==6 || d==8)
		printf("\n EVEN number");
	else
		printf("\n ODD number");

	if (d==1 || d==3 || d==5 || d==7 || d==9)
		printf("\n ODD number");
	else
		printf("\n EVEN number");
		
	if (d!=0 && d!=2 && d!=4 && d!=6 && d!=8)
		printf("\n ODD number");
	else
		printf("\n EVEN number");

	if (d!=1 && d!=3 && d!=5 && d!=7 && d!=9)
		printf("\n EVEN number");
	else
		printf("\n ODD number");
	printf("\n ***************************************");
	
	if (!(d==0 || d==2 || d==4 || d==6 || d==8))
		printf("\n ODD NUMBER");
	else
		printf("\n EVEN NUMBER");

	if (!(d==1 || d==3 || d==5 || d==7 || d==9))
		printf("\n EVEN NUMBER");
	else
		printf("\n ODD NUMBER");
		
	if (!(d!=0 && d!=2 && d!=4 && d!=6 && d!=8))
		printf("\n EVEN NUMBER");
	else
		printf("\n ODD NUMBER");

	if (!(d!=1 && d!=3 && d!=5 && d!=7 && d!=9))
		printf("\n ODD NUMBER");
	else
		printf("\n EVEN NUMBER");	
		
	(n%2==0)?printf("\nEven") : printf("\nOdd");

	printf("\n %s",(n%2==0)?"EVEN":"ODD");
	
}

