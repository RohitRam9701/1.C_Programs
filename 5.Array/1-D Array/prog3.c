/*To arrange the nos.in ascending order using bubble-sort technique and display the sorted array elements,where 5 nos. being taken from user and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	int n[5],i,j,t;
	for(i=0;i<5;i++)
	{
		printf("\n Enter number:");
		scanf("%d",&n[i]);
	}
	printf("\n Array Elements:");
	for(i=0;i<5;i++)
	{
		printf("%d ",n[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
	  {
		if(n[i]>n[j])
		{
		  t=n[i];
		  n[i]=n[j];
		  n[j]=t;	
		}
	  }
	}
	printf("\n Modified Array Elements:");
	for(i=0;i<5;i++)
	{
		printf("%d ",n[i]);
	}
}