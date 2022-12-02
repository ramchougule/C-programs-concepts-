#include<iostream>
using namespace std;

class Base
{
	public:
		int A,b;
		void fun()
		{
			cout<<"Base fun\n";
		}
		virtual void gun()
		{
			cout<<"Base gun\n";
		}
		virtual void sun()
		{
			cout<<"Base sun\n";
		}
		virtual void run()
		{
			cout<<"Base run\n";
		}
};

class Derived : public Base
{
	public:
		int X,Y;
		void gun()
		{
			cout<<"Derived gun\n";
		}
		virtual void run()
		{
			cout<<"Derived run\n";
		}
		virtual void mun()
		{
			cout<<"Derived mun\n";
		}
};

int main()
{
	cout<<"size of base class : "<<sizeof(Base)<<"\n";
	cout<<"size of derived class : "<<sizeof(Derived)<<"\n";
	
	Base *bp = NULL;
	Derived dobj;
	bp=&dobj;
	
	bp->fun();
	bp->gun();
	bp->sun();
	bp->run();
	//bp->mun();
	
	return 0;
}