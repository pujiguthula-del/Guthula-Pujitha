#include<iostream>
using namespace std;
class Demo
{
	public: static int a;//static variiable
	static void disp()//static function
	{
		cout<<"Static variable:"<<a<<endl;
	}
};
int Demo::a=100;//accessing static variable
int main()
{
	Demo::disp();//No object needed to all the static function
	return 0;
}
