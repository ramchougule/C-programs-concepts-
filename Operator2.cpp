#include<iostream>
using namespace std;

class Demo
{
	public:
		int X,Y;
		
		Demo(int i=0,int j=0)
		{
			X=i;
			Y=j;
		}
	
};

Demo operator +(Demo obj1, Demo obj2)
{
	cout<<"Inside + operator function\n";
	return Demo(obj1.X+obj2.X, obj1.Y+obj2.Y);
}

int main()
{
	Demo A(10,20);
	Demo B(30,40);
	Demo Ans(0,0);
	
	Ans = A + B;	// +(A,B);
	cout<<Ans.X<<"\n"<<Ans.Y<<"\n";
	return 0;
}