#include<iostream>
using namespace std;
class A
{
	public:
		void displayA()
		{
			cout<<"I am in class A"<<endl;
		}
};
class B
{
	public:
		void displayB()
		{
			cout<<"I am in class B"<<endl;
		}
};
class C:public A,public B
{
	public:
		void displayC()
		{
			cout<<"I am in class C"<<endl;
		}
};
int main()
{
	C obj;
	obj.displayA();
	obj.displayB();
	obj.displayC();
	return 0;
}
