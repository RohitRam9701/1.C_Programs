/*To generate the pattern of a right angled triangle having 'n' no. of rows;value of n being taken as input*/
#include<stdio.h>
void main()
{
 int i,j,n;
 printf("\n Enter total rows in patterns:");scanf("%d",&n);
 for(i=n;i>0;i--)
 {
  printf("\n");
  for(j=n;j>=i;j--)
  {
   printf("*");   
  }
 }
} 
//output for n=5
//*
//**
//***
//****
//*****