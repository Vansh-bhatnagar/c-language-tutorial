// accept the grade and print the remarks as:
//	A Good		B Can do better		C Work hard		D Poor
#include <stdio.h>
void main()
{
	char grade;
	printf("enter grade A/B/C/D: ");
	scanf("%c",&grade);
	if (grade=='A' || grade=='B' || grade=='C' || grade=='D') // input validation
	{
		if (grade=='A')
			printf("\n Good");
		else if (grade=='B')
			printf("\n Can do better");
		else if (grade=='C')
			printf("\n Work hard");
		else 
			printf("\n Poor");
	}
	else
	{
		printf("Invalid input...type the grade as A/B/C/D");
	}
}

