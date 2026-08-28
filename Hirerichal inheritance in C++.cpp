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
class Dog:public Animal
{
	public:
		void Bark()
		{
			cout<<"Barking..."<<endl;
		}
};
class Cat:public Animal
{
	public:
		void Meow()
		{
			cout<<"Meowing..."<<endl;
		}
};
int main()
{
	Dog d;
	cout<<"Dog Object.."<<endl;
	d.eat();
	d.Bark();
	Cat c;
	cout<<"Cat Object..."<<endl;
	c.eat();
	c.Meow();
	return 0;
}
