#include<iostream>
using namespace std;
inline void robo(int a,int b);
int main()
{
	robo(10,20);
	return 0;
}
inline void robo(int a,int b)
{
	cout<<"adding="<<(a+b);
}
