#include<iostream>
using namespace std;
class Animal
{
	public:
	void eat()
	{
		cout<<"Eating..."<<endl;
	}
};
class Dog : public Animal
{
	public:
		void bark()
		{
			cout<<"Barking..."<<endl;
		}
};
int main()
{
	Dog d;           //Object "d" is craeted for Derived class Dog
	d.eat();         //inherited from Animal
	d.bark();        //defined Dog
	return 0;
}
