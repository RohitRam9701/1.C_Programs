/*To count the total number of vowels in a word,where a word being taken from user as input and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	char word[10];int i,c;
	printf("\n Enter word:");
	gets(word);
	for(i=0,c=0;word[i]!='\0';i++)
	{
	    if(word[i]=='A' || word[i]=='E' || word[i]=='I' || word[i]=='O' || word[i]=='U')
	    c=c+1;
	    if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
	    c=c+1;
	}
	printf("\n Total vowels :%d",c);
}