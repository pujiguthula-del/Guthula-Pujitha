#include<stdio.h>
int main()
{
	int rows=3,columns=4,i,j;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}
