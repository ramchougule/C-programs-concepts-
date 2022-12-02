#include<stdio.h>
#include<stdlib.h>

struct Demo
{
	int i;
	float f;
};

int main()
{
	struct Demo obj; 		//Static memory allocation
	
	struct Demo *ptr=NULL;
	ptr=(struct Demo *)malloc(sizeof(struct Demo)); 	//dynamic memory allocation
	
	obj.i=11;
	obj.f=21.9;
	
	ptr->i=11;
	ptr->f=21.9;
	
	/*printf("enter the value of static object in integer\n");
	scanf("%d",&obj.i);
	
	printf("enter the value of dynamic object in integer\n");
	scanf("%d",&ptr->i);*/
	
	printf("%d\n",obj.i);
	printf("%d\n",ptr->i);
	
	free(ptr);
	
	return 0;
}
	