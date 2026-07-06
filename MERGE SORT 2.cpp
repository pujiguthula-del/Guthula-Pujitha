#include <stdio.h>
int temp[1000];
void merges(int a[],int low,int high)
{
	int i=low;
	int j=mid+1;
	int k=low;
	while(i<=mid && j<=high){
		if(a[i]<a[j]){
			temp[k]=a[i];
			i++;
			k++;
		}
		else{
			temp[k++]=aa[j++];
			j++;
			k++;
		}
	}
	while(j<=high){
		temp[k]=a[j];
		j++;
		k++;
	}
}
int main()
{
	int i,n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i])
	}
	mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	
}

