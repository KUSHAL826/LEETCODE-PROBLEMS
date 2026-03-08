/*MERGE SORT USING DIVIDE AND CONQOUR*/
#include<stdio.h>
#include<stdlib.h>
void merge(int *a,int low,int mid,int high)
{
	int i,j,k,h,b[high];
	i=low,j=mid+1,h=low;
	while((h<=mid) && (j<=high))
	{	
		if(a[h]<a[j])
		{
			b[i++]=a[h++];
		}
		else
		{
			b[i++]=a[j++];
		}
	}
	if(h>mid)
	{
		for(k=j;k<=high;k++)
		{
			b[i++]=a[k];
		}
	}
	else
	{
		for(k=h;k<=mid;k++)
		{
			b[i++]=a[k];
		}
	}
	for(k=low;k<=high;k++)
	{
		a[k]=b[k];
	}
}
void mergesort(int *a,int low,int high)
{
	if(low<high){
	int mid=(low+high)/2;
	mergesort(a,low,mid);
	mergesort(a,mid+1,high);
	merge(a,low,mid,high);
	}
}
int main()
{
	int i,n=5,low=0,high=n-1,a[n];	
	printf("ENTER ARRAY ELEMENTS: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,low,high);
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
