#include<stdio.h>
int main()
{
	int n,i;
	int a=0,b=1,c;
	printf("Enter number of terms:\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d",a);
	}
	else if(n==2)
	{
		printf("%d",b);
	}
	else
	{
		for(i=3;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
		}
	}
	printf("Nth fibonacci number =%d",b);
	
	return 0;
	
}
