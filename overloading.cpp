#include<iostream>
using namespace std;

class Overloading
{
	public:
		int Add(int a, int b)					//1000
		{
			cout<<"Addition of 2 integers\n";
		}
		float Add(float a, float b)				//2000
		{
			cout<<"Addition of floats\n";
		}
		//Add@2dd
		double Add(double a, double b)			//3000
		{
			cout<<"Addition of double\n";
		}
		//Add@3iii
		int Add(int a, int b, int c)			//4000
		{
			cout<<"Addition of 3 integers\n";
		}
		void fun(int a , float b)
		{}
		void fun(float x,int y)
		{}
};

int main()
{
	Overloading obj;
	obj.Add(11,21);   //CALL 1000
	obj.Add(11,21,51); //CALL 4000
	obj.Add(23.3f,44.4f);//CALL 2000
	obj.Add(23.3,44.4);//CALL 3000
	return 0;
}