//BINARY SEARCH
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,mid,key;
	printf("Enter number of elements in the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements of Array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter key element to search in the array: ");
	scanf("%d",&key);
	int low=0,high=n-1;
	int flag=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]<key)
		{
			low=mid+1;	
		}
		else if(a[mid]>key)
		{
			high=mid-1;
		}
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is not found\n",key);
	}	
	else
	{
		printf("%d is found at position %d\n",key,mid+1);
	}
	return 0;
}
			
// TIME COMPLEXITY:
// At every iteration half of the array is left hence   n/2^k=1   n=2^k    k=log n
// Hence (summation  i=1 to log n (1) )   ==> logn -1 +1==>log n
// timecomplexity=> O(log n)
