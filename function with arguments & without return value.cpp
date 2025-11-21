#include<stdio.h>
int add(int x,int y);
int main()
{
	int a,b,sum=0;
	printf("Enter a,b values");
	scanf("%d%d",&a,&b);
	add(a,b);
}
int add(int x, int y)
{
	int sum = 0;
	sum = x + y;
	printf("sum is %d",sum);
}

