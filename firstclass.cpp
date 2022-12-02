#include<iostream>

using namespace std;
//Class Declaration
class Maths
{
	public:					//Access Specifier
		int iNo1,iNo2;		//Characteristics
		
	Maths()					//Default constructor
	{
		cout<<"Inside default constructor";
		iNo1=0;
		iNo2=0;
	}
	
	Maths(int A,int B)		//Parametrized constructor
	{
		cout<<"Inside parametrized constructor";
		iNo1=A;
		iNo2=B;
	}
	
	~Maths()
	{
		cout<<Inside destructor";
	}
	
	//int Addition(Maths *this)
	int Addition()			//Behaviour
	{
		return iNo1+iNo2;
	}
	int Subtraction()		//Behaviour
	{
		return iNo1-iNo2;
	}

};
int main()
{
	Maths mobj1;
	Maths mobj2(11,10);	 
	int ret = 0;
	
	ret = mobj2.Addition();
	cout<<"Addition is : "<<ret<<"\n";
	
	ret = mobj1.Addition();
	cout<<"Addition is : "<<ret<<"\n";
	
	return 0;
}