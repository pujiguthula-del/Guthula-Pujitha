#include <stdio.h>
int main()
{
	int a[2][2], T[2][2], i,j,r,c;
	printf("Enter rows and columns ofthe matrix A");
	scanf("%d%d",&r,&c);
	printf("Enter the element");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			T[i][j]=a[j][i];
		}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t", T[i][j]);
			}
			printf("\n");
			}	
		return 0;
}
