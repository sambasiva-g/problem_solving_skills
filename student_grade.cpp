#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks:");
	scanf("%d",&marks);
	if(marks<0||marks>100)
	{
		printf("enter the marks in the range 1-100 ");
	}
	else if(marks>90)
	{
		printf("Grade=A");
	}
	else if(marks>80)
	{
		printf("Grade=B");
	}
	else if(marks>70)
	{
		printf("Grade=c");
	}
	else if(marks>60)
	{
		printf("Grade=D");
	}
	else if(marks>50)
	{
		printf("Grade=E");
	}
	else
	{
		printf("Grade=F");
	}
	return 0;
}