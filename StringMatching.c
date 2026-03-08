/*STRING MATCHING USING BREUTE FORCE APPROACH*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,j,m,n,flag=0;
	char P[50],T[50];
	printf("Enter the Pattern String: ");
	gets(P);
	printf("Enter the Target String: ");
	gets(T);
	n=strlen(P),m=strlen(T);
	for(i=0;i<=n-m;i++)
	{
		for(j=0;j<=m-1;j++)
		{
			if(P[i+j]!=T[j])
			{
				break;
			}
		}0
		if(j==m)
		{
			flag=1;
			printf("TARGET STRING FOUND AT INDEX: %d\n",i);
		}
	}
	if(flag==0)
	{
		printf("TARGET STRING NOT FOUND\n");
	}
	return 0;
}
		
	
	