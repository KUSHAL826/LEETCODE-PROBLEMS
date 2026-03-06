#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int Partition(int a[],int low,int high)
{
	int pivot=a[low];
	int i=low+1;
	int j=high;
	while(i<=j)
	{
		while(a[i]<=pivot && i<=high)
		{
			i++;
		}
		while(a[j]>pivot)
		{
			j--;
		}
		if(i<j)
		{
			Swap(&a[i],&a[j]);
		}
	}
	Swap(&a[j],&a[low]);
	return j;
}
void QuickSort(int a[],int low,int high)
{
	if(low<high)
	{
		int part=Partition(a,low,high);
		QuickSort(a,low,part-1);
		QuickSort(a,part+1,high);
	}
}
int main()
{
	int n=25000,a[n],low=0,high=n-1,i;
	for(i=0;i<n;i++)
	{
		a[i]=rand()%10000;
	}
	clock_t start=clock();
	QuickSort(a,low,high);
	clock_t end=clock();
	double timetaken=(double)(end-start)/CLOCKS_PER_SEC;
	printf("TIME TAKEN: %lf\n",timetaken);
	
	return 0;
}
	