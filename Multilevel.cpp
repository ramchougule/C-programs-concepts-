#include<iostream>
using namespace std;

class Base
{
	public:
		int A,B;
		
		Base()
		{
			cout<<"Inside Base constructor\n";
		}
		~Base()
		{
			cout<<"Inside Base destructor\n";
		}
		void fun()
		{
			cout<<"Inside Base fun\n";
		}
};

class Derived : public Base
{
	public:
		int X,Y;
		
		Derived()
		{
			cout<<"Inside derived constructor\n";
		}
		~Derived()
		{
			cout<<"Inside derived destructor\n";
		}
		void gun()
		{
			cout<<"Inside gun of derived\n";
		}
};

class DerivedX:public Derived
{
	public:
		int i,j;
		
		DerivedX()
		{
			cout<<"Inside derivedX constructor\n";
		}
		~DerivedX()
		{
			cout<<"Inside derivedX destructor\n";
		}
		void sun()
		{
			cout<<"Inside sun of derivedX\n";
		}
};

int main()
{
	cout<<"Size of Base :"<<sizeof(Base)<<"\n";
	cout<<"Size of Derived :"<<sizeof(Derived)<<"\n";
	cout<<"Size of DerivedX :"<<sizeof(DerivedX)<<"\n";
	
	DerivedX dobj;
	
	dobj.fun();
	dobj.gun();
	dobj.sun();
	
	return 0;
}