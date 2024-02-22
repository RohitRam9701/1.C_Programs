/*To count the total no. of words in a line of text,where the line of text being entered as input and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	char s[30];int i,c;
	printf("\n Enter text:");
	gets(s);
	for(i=0,c=1;s[i]!='\0';i++)
	{
	   if(s[i]==' ')
	   c+=1;
	}
	printf("\n Total no.of words:%d",c);
}