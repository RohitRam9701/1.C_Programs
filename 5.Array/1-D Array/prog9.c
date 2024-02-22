/*To delete all the vowels from a line of text and display the modified text,where the line of text being entered as input and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	char text[30];int i,j;printf("\n Enter text:");gets(text);
	for(i=0;text[i]!='\0';i++)
	{
	   while(text[i]=='a'||text[i]=='e'||text[i]=='i'||text[i]=='o'||text[i]=='u')
	   {
         j=i;
		 while(text[j]!='\0')
		 {
		 	text[j]=text[j+1];j++;
		 }
	   }
	   while(text[i]=='A'||text[i]=='E'||text[i]=='I'||text[i]=='O'||text[i]=='U')
	   {
         j=i;
		 while(text[j]!='\0')
		 {
		 	text[j]=text[j+1];j++;
		 }
	   }
	}
	printf("\n Modified text:%s",text);
}