#include<stdio.h>
int main()
{
	int i,n,low,high,mid,search,found=0;
	printf("enter array size");
	scanf("%d",&n);
	printf("enter array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("what element you want to search");
	scanf("%d",&search);
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(search==a[mid])
		{
			printf("element is found at %d");
			found=1;
			break;
		}
		else if(search<a[mid])
		{
			high=mid-1;
		}
		else if(search>a[mid])
		{
			low=mid+1;
		}
	}
	if(found==0)
	{
		printf("element not found");
	}
	return 0;
}
