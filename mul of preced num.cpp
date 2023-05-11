#include <stdio.h>
int main()
{
	int i,num,res=1;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=num;i>0;i--)
	{
		res=res*i;
	}
	printf("%d",res);
	return 0;
}