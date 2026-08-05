#include<iostream>
using namespace std;
class student
{
	int marks;
	public:
	void setMarks(int m)
	{
		marks=m;
	}
	void showMarks()
	{
		cout<<"Marks:"<<marks<<endl;
	}
	void addBonus(student &s)
	{
		s.marks+=5;
	}	
};
int main()
{
	student s1,s2;
	s1.setMarks(90);
	s2.setMarks(85);
	s1.addBonus(s2);
	s2.showMarks();
	return 0;
	
}
	

