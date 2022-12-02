#include<iostream>
using namespace std;

class Demo
{
	public:				//Access specifier
		int i;			//instance variable
		int j;			//instance variable
		static int k;	//class variable
		static int l;	//class variable
		
		Demo()			//Default constructor
		{
			i=0;
			j=0;
		}
		Demo(int a, int b)//Parametrised constructor
		{
			i=a;
			j=b;
		}
		//void fun(const Demo *this)
		void fun()		//instance method
		{
			//static+non static
			cout<<"Inside non static method fun\n";
			cout<<"value of i : "<<this->i<<"\n";
			cout<<"value of j : "<<this->j<<"\n";
			cout<<"value of k : "<<k<<"\n";
			cout<<"value of l : "<<l<<"\n";
		}
		//static void gun()
		static void gun()//class method
		{
			//static
			cout<<"inside static method gun\n";
			cout<<"value of k : "<<k<<"\n";
			cout<<"value of l : "<<l<<"\n";
		}
};

int Demo::k=0;
int Demo::l=0;

int main()
{
	cout<<"Inside Main\n";
	cout<<"Value of k : "<<Demo::k<<"\n";
	cout<<"Value of l : "<<Demo::l<<"\n";
	Demo::gun();
	
	Demo obj1(10,11);
	Demo obj2(20,21);
	Demo obj3;
	
	cout<<"Value of i in obj1 : "<<obj1.i<<"\n";
	cout<<"Value of i in obj2 : "<<obj2.i<<"\n";
	
	cout<<"Value of j in obj1 : "<<obj1.j<<"\n";
	cout<<"Value of j in obj2 : "<<obj2.j<<"\n";
	
	obj1.fun();//fun(&obj1);
	obj2.fun();
	
	obj1.gun(); //Demo::gun();
	
	return 0;
}

