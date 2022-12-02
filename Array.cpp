#include<iostream>
using namespace std;

class Array
{
	public:
		int iSize;
		int *Arr;
		
		Array(int iLength)
		{
			cout<<"Inside constructor\n";
			iSize=iLength;
			Arr = new int[iSize];
		}
		~Array()
		{
			delete []Arr;
			cout<<"Inside destructor\n";
		}
		void Accept()
		{
			cout<<"Enter the value\n";
			int i =0;
			
			for(i=0;i<iSize;i++)
			{
				cin>>Arr[i];
			}
		}
		void Display()
		{
			cout<<"Elements of array are : \n";
			int i=0;
			for(i=0;i<iSize;i++)
			{
				cout<<Arr[i]<<"\n";
			}
		}
		int Summation()
		{
			int iSum=0,i=0;
			for(i=0;i<iSize;i++)
			{
				iSum=iSum+Arr[i];
			}
			return iSum;
		}
};
int main()
{
	cout<<"Inside main\n";
	int iRet=0;
	Array obj1(4);
	
	obj1.Accept();
	obj1.Display();
	
	iRet=obj1.Summation();
	cout<<"The summation of all array elements is : "<<iRet<<"\n";
	return 0;
}