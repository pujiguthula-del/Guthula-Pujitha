#include<stdio.h>
int add();
int main()
{
	int sum = 0;
	sum=add();
	printf("Sum is %d",sum);
}
int add()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	res=a+b;
	return res;
}

