#include<iostream>
using namespace std;
class Demo
{
	public:static int count;
	       Demo()
	       {
	       	count++;
		   }
		   void disp()
		   {
		   	cout<<"count:"<<count<<endl;
		   }
};
int Demo::count=0;//Initialization outside the class
int main()
{
	Demo d1,d2,d3;//object creation: 3 objects created
	d1.disp();
	return 0;//output:count:3
}
