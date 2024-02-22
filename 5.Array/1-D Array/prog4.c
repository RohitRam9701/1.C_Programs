/*To generate and display the reverse of the word as output,where a word being taken from user as input and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	char word[10],rev[10];int i,j,le;
	printf("\n Enter word:");
	scanf("%s",word);
	for(i=0,le=0;word[i]!='\0';i++)
	{
	    if(word[i]!=' ')
	    le=le+1;
	}
	for(i=le-1,j=0;i>=0;i--,j++)
	{
		rev[j]=word[i];
	}
	rev[j]='\0';
	printf("\n Reverse :%s",rev);
}