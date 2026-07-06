#include<stdio.h>
int main()
{
	int n,i,count=0,num=2,prime;
	printf("Enter n:\n");
	scanf("%d",&n);
	while(count<n)
	{
		prime=1;
		for(i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				prime=0;
				break;
			}
		}
		if (prime)
		{
			count++;	
		}
		if (count<n)
		{
			num++;
		}
	}
	printf("The %dth prime number is %d",n,num);
	return 0;
}
