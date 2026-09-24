#include<iostream>
using namespace std;
template <class T>
void bubblesort(T arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				T temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
template <class T>
void display(T arr[],int n)
{
	for(int i=0;i<n;i++)
	    cout<<arr[i]<<" ";
	cout<<endl;    
}
int main()
{
	int a[]={5,2,8,1,3};
	float b[]={4.5,2.1,8.3,1.2};
	
	int n1=5;
	int n2=4;
	
	
	bubblesort(a,n1);
	bubblesort(b,n2);
	
	display(a,n1);
	display(b,n2);
	return 0;
}
