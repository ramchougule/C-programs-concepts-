#include<iostream>
using namespace std;

class Maximum
{
	public:
		int max(int value1,int value2)
		{
			if(value1>value2)
			{
				return value1;
			}
			else
			{
				return value2;
			}
		}
};

int main()
{
	int No1,No2;
	
	Maximum mobj;
	
	cout<<"Enter the 1st number:\n";
	cin>>No1;
	
	cout<<"Enter the 2nd number:\n";
	cin>>No2;
	
	cout<<"the maximum of 2 numbers is : "<<mobj.max(No1,No2);
	
	return 0;
}
	
	