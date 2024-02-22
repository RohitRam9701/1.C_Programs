/*To convert the lowercase alphabets of a line of text to uppercase & vice-versa and display the modified text,where the line of text being entered as input and stored in 1-D array*/
#include<stdio.h>
void main ()
{
	char text[30];int i,x;printf("\n Enter text:");gets(text);
	for(i=0;text[i]!='\0';i++)
	{
	   if(text[i]!=' ')
	   {
         x=text[i];
		 if (x>=97 && x<=122)
		 x=x-32;
		 else 
		 x=x+32;
		 text[i]=(char)x;
	   }
	}
	printf("\n Modified text:%s",text);
}