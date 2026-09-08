#include<iostream>
using namespace std;
class student
{
	public:
		int rollno;
		void display()
		{
			cout<<"Roll No="<<rollno<<endl;
		}
};
int main()
{
	student s;      //object
	student *ptr;    //pointer to object
	ptr=&s;          //store address of object
	ptr->rollno=101;
	ptr->display();
	return 0;
}
