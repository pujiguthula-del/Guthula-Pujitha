#include<iostream>
using namespace std;
class Parent
{
	public:
		virtual void show()
		{
			cout<<"\nInside Base Class-show() function";
		}
};
class Child:public Parent
{
	public:
		void show()
		{
			cout<<"\nInside Derived Class-show() function";
		}
};
int main()
{
	Parent p;
	p.show();   //it will call Base class show()
	Child c;
	c.show();   //it will call Derived class show()
	Parent *ptr=new Child();
	ptr->show();  //calls Derived::show(dynamic binding)
	return 0;
}
