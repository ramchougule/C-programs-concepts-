#include<stdio.h>

int main()
{
	int No1,No2;
	
	printf("Enter the 1st number: \n");
	scanf("%d",&No1);
	
	printf("Enter the 2nd number: \n");
	scanf("%d",&No2);
	
	if(No1>No2)
	{
		printf("The maximum of two numbers is %d\n",No1);
	}
	else
	{
		printf("The maximum of two numbers is %d\n",No2);
	}
	
	return 0;
}
	