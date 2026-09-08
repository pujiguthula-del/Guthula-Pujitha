#include<iostream>
using namespace std;
class Base
{
	public:
		void showBase()
		{
			cout<<"Base class function\n";
		}
};
class Derived:public Base
{
	public:
		void showDerived()
		{
			cout<<"Derived class function\n";
		}
};
int main()
{
	Derived d;
	Base *bptr=&d;
	bptr->showBase();    //Allowed
	//bptr->showDerived();       //Error
	Derived * dptr=&d;
	dptr->showBase();         //Allowed
	dptr->showDerived();      //Allowed
	return 0;
}
