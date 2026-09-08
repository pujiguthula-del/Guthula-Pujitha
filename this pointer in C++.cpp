#include<iostream>
using namespace std;
class student
{
	private:
		int rollno;
		public:
		void setRollno(int rollno)
		{
			this->rollno=rollno;
		}
		void display()
		{
			cout<<"Roll No="<<rollno<<endl;
		}
};
int main()
{
	student s;
	s.setRollno(101);
	s.display();
	return 0;
}
