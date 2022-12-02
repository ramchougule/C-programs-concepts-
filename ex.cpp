#include<iostream>
using namespace std;

class Base
{
	public:
		int A;
};
class Derived: public Base
{
};

int main()
{
	cout<<"Size of Base object : "<<sizeof(Base)<<"\n";
	cout<<"Size of Base object : "<<sizeof(Derived)<<"\n";
}