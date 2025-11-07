// accept the number of subjects (n), marks of n subject and print total and average
#include <stdio.h>
void main()
{
	int c, n, marks, tot;
	float avg;
	printf("enter the number of subjects: ");
	scanf("%d",&n);
	tot=0;
	for(c=1 ; c<=n ; c++)
	{
		printf("\n Enter subject%d marks: ",c);
		scanf("%d",&marks);
		tot=tot+marks;
	}
	avg=tot/n;
	printf("total marks %d, average marks %f",tot,avg);
	printf("\n** END **");
}
