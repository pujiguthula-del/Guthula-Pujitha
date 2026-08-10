#include<iostream>
using namespace std;
class Number
{
	int value;
	public:
		Number(int v)//Constructor
		{
			value=v;
		}
		Number()
		{
			value=0;
		}
		Number operator + (Number obj)//Binary operator overloading plus(+)
		{
			Number temp;
			temp.value=value+obj.value;//add values of two objects;
			return temp;
		}
		void display()
		{
			cout<<"Value:"<<value<<endl;
		}
};
int main()
{
	Number n1(100),n2(200);
	Number n3=n1+n2;
	n3.display();
	return 0;
}
