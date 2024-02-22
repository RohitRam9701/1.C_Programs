/*To delete a no. from a particular position of array and display the modified array,where 5 nos. being taken from user and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	int n[5],p,i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter number:");
		scanf("%d",&n[i]);
	}
	printf("\n Enter position to delete :");//use the position no. of the no. to be deleted
	scanf("%d",&p);
	printf("\n Array Elements:");
	for(i=0;i<5;i++)
	{
		printf("%d",n[i]);
	}
	for(i=p-1;i<4;i++)
	{
		n[i]=n[i+1];
	}
	printf("\n Modified Array Elements:");
	for(i=0;i<4;i++)
	{
		printf("%d ",n[i]);
	}
}