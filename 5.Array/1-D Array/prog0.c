/*To find maximum no. & minimum no. ,where 5 nos. being taken from user and stored in 1-D array*/
#include<stdio.h>
void main()
{
 int n[5],max,min,i;   
 for(i=0;i<5;i++)
 {
  printf("\n Enter number:");   \
  scanf("%d ",&n[i]);
 }
 for (max=n[0],min=n[0],i=1;i<5; i++)
 {
  if(n[i]>max)
  max=n[i];
  else if(n[i]<min)
  min=n[i];
 }
 printf("\n Maximum no.:%d Minimum no. :%d",max,min);
}