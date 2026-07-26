#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,d,x1,x2,r1,r2;
	cout <<"Enter values of a,b and c:"<<endl;
	cin >>a>>b>>c;
	if(a==0)
	{
		cout<<"This is not a quadratic equation."<<endl;
	}
	else
	{
	d=b*b-4*a*c;
	if (d>0)
	{
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		cout <<"Roots are real and different."<<endl;
		cout <<"x1="<<x1<<endl;
		cout <<"x2="<<x2<<endl;	
	}
	else if (d==0)
	{
		x1=-b/(2*a);
		cout <<"Roots are real and equal."<<endl;
		cout <<"x1=x2="<<x1<<endl;
	}
	else
	{
		r1=-b/(2*a);
		r2=sqrt(-d)/(2*a);
		cout <<"Roots are imaginary."<<endl;
		cout <<"r1="<<r1<<"+"<<"i"<<"r2"<<endl;
		cout <<"r2="<<r1<<"-"<<"i"<<"r2"<<endl;
	}
}
	return 0;
}
