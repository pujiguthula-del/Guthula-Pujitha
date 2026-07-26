#include<iostream>
using namespace std;
namespace math
{
	int a=20,b=30;
	void add()
	{
		cout<<"sum="<<a+b<<endl;
	}
}
int x=100;
int main()
{
	int x=50;
	math::add();
	cout<<"Local x="<<x<<endl;
	cout<<"Global x="<<::x<<endl;
	return 0;
}
