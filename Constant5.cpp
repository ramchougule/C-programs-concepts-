#include<iostream>
using namespace std;

class Demo
{
	public:
		int i;
		const int j;		//constant characteristics
		Demo(int x=10, int y=20): j(y)
		{
			i=x;
		}
		void fun()
		{
			int a =10;
			const int b=20;	//constant variable
			i++;	//A		(7)
			j++;	//NA	(8)
			a++;	//A		(15)
			b++;	//NA	(16)
		}
		void gun() const	//constant behaviour
		{
			int a =10;
			const int b = 20;
			i++;	//NA	(22)
			j++;	//NA	(22)
			a++;	//A		(24)
			b++;	//NA	(25)
		}
};

int main()
{
	Demo obj1(11,21);			//11 21
	const Demo obj2(11,21); 	//11 21		//constant object
	
	obj1.fun();		//A
	obj1.gun();		//A
	obj2.fun();		//NA
	obj2.gun();		//A
	
	obj1.i++;		//A
	obj1.j++;		//NA
	obj2.i++;		//NA
	obj2.j++;		//NA
	
	return 0;
}