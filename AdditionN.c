/*
	Steps
	Step 1:Understand the problem statement
	Step 2:write the algorithm
	Step 3:Decide the programming language
	Step 4:Write the program
	Step 5:test the program
*/

//Accept N numbers from user and perform the addition
//Value of N=5
//Values:10 20 30 40 50
//Output: Addition is 150

//Algorithm
/*
	START
		Accept the number of elements from user
		Allocate the memory to store that numbers
		Accept the numbers from user
		Perform addition of all numbers
		Display the addition
	END
*/
#include<stdio.h>		//for printf and scanf
#include<stdlib.h>		//for malloc and free

///////////////////////////////////////////////
//
// Application name : Addition of N numbers
// Input:  N numbers
// Output: Addition
// Author:  Ram Chougule
// Date:	18 September
//
///////////////////////////////////////////////

int main()
{
	int *Arr=NULL;		//Pointer to hold the address of array
	int isize=0;		//Variable to hold size of array
	register int i=0;
	int isum=0;
	
	printf("Please enter how many elements you want?\n");
	scanf("%d",&isize);
	
	//Allocate the memory
	Arr=(int *)malloc(isize*sizeof(int));
	
	printf("Memory allocation is successful\n");
	
	printf("enter the elements:\n");
	
	for(i=0;i<isize;i++)
	{
		scanf("%d",&Arr[i]);
	}
	
	for(i=0;i<isize;i++)
	{
		isum=isum+Arr[i];
	}
	
	printf("Addition of elements is %d\n",isum);
	
	free(Arr);
	printf("Memory gets deallocated\n");
	
	return 0;
}
	


