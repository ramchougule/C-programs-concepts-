#include<iostream>
using namespace std;

class Base
{
	public:						//Access specifier
		int A,B;
		
		void fun()				//Function definition		1000
		{
			cout<<"Base fun\n";
		}
		void gun(int i)			//Function definition		2000
		{
			cout<<"Base gun with 1 integer\n";
		}
		void gun(int i,int j)	//Overloaded function definition 3000	 
		{
			cout<<"Base gun with 2 integers \n";
		}
};

class Derived : public Base
{
	public:
		int X,Y;
		
		void sun()				//function definition	4000
		{
			cout<<"Derived sun\n";
		}
		void fun()				//Function redefinition		5000
		{
			cout<<"Derived fun\n";
		}
};

int main()
{
	Derived dobj;
	dobj.Base::fun();			//CALL 5000
	dobj.gun(11);		//CALL 2000
	dobj.gun(11,21);	//CALL 3000
	dobj.sun();			//CALL 4000
	return 0;
}