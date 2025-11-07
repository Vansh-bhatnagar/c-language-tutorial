// accept the marks of 3 subject and print total and average for 5 students
#include <stdio.h>
void main()
{
	int c, sub1, sub2, sub3, tot;
	float avg;
	for(c=1;c<=5;c++)
	{
		printf("\nenter 3 subject marks ");
		scanf("%d%d%d",&sub1,&sub2,&sub3);
		tot=sub1+sub2+sub3;
		avg=tot/3.0;
		printf("total is %d, average is %f",tot,avg);
	}
	printf("\n END");
}
