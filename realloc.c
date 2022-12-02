#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p=NULL;
	
	p=(int *)malloc(10*sizeof(int));
	
	//use memory
	
	p=(int *)realloc(p,15*(sizeof(int));
	
	//use memory
	
	free(p);
	
	return 0;
	
}

/*if you want to overcome, while using realloc the memory does not get so to 
not loose the last memory
then make q=p
q=(int *)realloc(p,15*(sizeof(int));
if(q==NULL)
{
	printf("realloc fails");
	q=p;
}
//use memory
free(q);
*/