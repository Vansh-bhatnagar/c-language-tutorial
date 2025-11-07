// accept 2 numbers show a list of options (+,-,*,/,%) accept a character and 
// calculate the answer an display it.
#include <stdio.h>
int main()
{
	int n1, n2, res;
	char ope;
	printf("enter 2 numbers ");
	scanf("%d%d",&n1,&n2);
	printf("enter the operator (+ - * / %): "); 
	fflush(stdin);  	// 5 types of buffers  stdin  stdout   stderr   stdprn   stdaux
	scanf("%c",&ope);
	switch(ope)
	{
		case '+' : printf("\n Your selected addition"); res=n1+n2;  break;
		case '-' :  printf("\n Your selected subtraction");  res=n1-n2;  break;
		case '*' :  printf("\n Your selected multiplition"); res=n1*n2;  break;
		case '/' :  printf("\n Your selected division"); res=n1/n2;  break;
		case '%' :  printf("\n Your selected remainder"); res=n1%n2;  break;
		default : res=0; printf("You selected invalid operator");
	}
	printf("\n result is %d",res);
}

