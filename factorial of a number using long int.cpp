#include<stdio.h>
int main()
{
	int i,n;
	long int fact=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("factorioal is %ld",fact);
	return 0;
}
