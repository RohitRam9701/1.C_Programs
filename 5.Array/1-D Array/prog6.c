/*To combine 2 separate words into a single word and to display it,where 2 separate words being taken from user as input and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	char s1[10],s2[10],s[20];int i,j;
	printf("\n Enter 1st word:");
	gets(s1);
	printf("\n Enter 2nd word:");
	gets(s2);
	for(i=0,j=0;s1[i]!='\0';i++,j++)
	{
	   s[j]=s1[i];
	}
	for(i=0;s2[i]!='\0';i++,j++)
	{
	   s[j]=s2[i];
	}
	s[j]='\0';
	printf("\n Combined string(word):%s",s);
}