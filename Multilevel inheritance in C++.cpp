//Multilevel inheritance
#include<iostream>
using namespace std;
class Animal
{
	public:B
		void eat()
		{
			cout<<"Eating..."<<endl;
		}
};
class Dog:public Animal
{
	public:
		void bark()
		{
			cout<<"Barking..."<<endl;
		}
};
class puppy:public Dog
{
	public:
		void weep()
		{
			cout<<"Weeping..."<<endl;
		}
};
int main()
{
	puppy p;
	p.eat();
	p.bark();
	p.weep();
	return 0;
}
