#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,temp,rem,digits=0,sum=0;
	cout<<"Enter a number:";
	cin>>n;
	temp=n;
	//count number of digits
	while(temp>0)
	{
		digits++;
		temp=temp/10;
	}
	temp=n;
	//sum of digits to power of digits
	while(temp>0)
	{
		rem=temp%10;
		sum=sum+pow(rem,digits);
		temp=temp/10;
	}
	if(sum==n)
	{
		cout<<"Amstrong number.";
	}
	else
	{
		cout<<"Not a amstrong number.";
	}
	return 0;
}
