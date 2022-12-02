#include<stdio.h>

int main()
{
	int Arr[4]={11,21,51,101};
	
	printf("%d\n",sizeof(Arr)); 	//16
	printf("%d\n",sizeof(Arr[2]));	//4
	
	printf("%d\n",Arr);				//100
	printf("%d\n",&Arr);			//100
	
	printf("%d\n",Arr+1);			//100+1*4=104
	printf("%d\n",(&Arr)+1);		//100+4*4=116
	
	printf("%d\n",Arr[2]);
	printf("%d\n",*(Arr+2));
	printf("%d\n",2[Arr]);

	return 0;
}