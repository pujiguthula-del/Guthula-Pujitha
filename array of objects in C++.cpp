#include<iostream>
using namespace std;
class student
{
public:
	int rollno;
	string name;
	void getData()
	{
		cout<<"Enter Roll number:";
		cin>>rollno;
		cout<<"Enter Name:";
		cin>>name;
				
	}
	void display()
	{
	    cout<<"Roll number:"<<rollno<<endl;
		cout<<"Name:"<<name<<endl;
		}
};
int main()
{
	int i;
	student s[3];
	cout<<"Enter details of 3 students:\n";
	for(int i=0;i<3;i++)
	{
		cout<<"\nstudent "<<i+1<<endl;
		s[i].getData();
	   
	}
	cout<<"Student Details:\n";
	for(int i=0;i<3;i++)
	{
		cout<<"\nstudent "<<i+1<<endl;
		s[i].display();
    }
	return 0;
}
