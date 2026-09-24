#include<iostream>
using namespace std;
template <class T>
void display(T a)
{
	cout<<"One value:"<<a<<endl;
}
template <class T>
void display(T a,T b)
{
	cout<<"Two values:"<<a<<" "<<b<<endl;	
}
int main()
{
	display(10),
	display(10,20);
	return 0;
}
