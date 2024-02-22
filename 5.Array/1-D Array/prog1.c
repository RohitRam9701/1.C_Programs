/*To find the sum of odd nos. & even nos. ,where 5 nos. being taken from user and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	int n[5],odd,even,i;
	for(i=0;i<5;i++)
	{
		printf("\n Enter number:");
		scanf("%d",&n[i]);
	}
	for(i=0,odd=0,even=0;i<5;i++)
	{
		if(n[i]%2>0)
		odd=odd+n[i];
		else
		even=even+n[i]; 
	}
	printf("\n Sum of odd numbers:%d Sum of even numbers:%d",odd,even);
}