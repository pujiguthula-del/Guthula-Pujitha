#include<iostream>
using namespace std;
class Parent
{
	public:     void show()
	            {
	            	cout<<"\nInside the Parent Class - show() function";
				}
};
class Child:public Parent
{
	public:     void show()
	            {
	            	cout<<"\nInside Child Class - show() function";
				}
	
};
int main()
{
	Parent p;
	p.show();  //it will call Base Class show()
    
    Child c;
    c.show();
    
    Parent *ptr=&c;
    ptr->show();
    return 0;
}

