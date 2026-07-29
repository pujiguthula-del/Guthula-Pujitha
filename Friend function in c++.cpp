#include<iostream>
using namespace std;
class Demo
{
	private:int x,y; //x,y are private members
	void disp()//disp() also private member function
	{
		x=10;
		y=20;
		cout<<"I am inside disp() meber function of the class";
	}
	friend void add(Demo ob);//Declare friend function with parameter
};
void add(Demo ob)//add() is a NON-MEMBER FUNCTION, accesing class private data
{
	ob.x=10;//Accessing private data
	ob.y=20;//Accessing private data
	cout<<"Sum="<<ob.x+ob.y<<endl;
}
int main()
{
	Demo ob;
	add(ob);//pass object to friend function
	return 0;
}
