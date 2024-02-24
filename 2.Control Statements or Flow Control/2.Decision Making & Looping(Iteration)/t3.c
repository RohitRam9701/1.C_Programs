#include<stdio.h>
int main()
{
  int c = 0, num, sum = 0;
  printf("\num Enter numbers to add. Enter a negative number to end list): ");
  while(1)
  { scanf("%d",&num);
    if (num < 0) 
    break;
    sum += num;
    ++c;
  }
  printf("\num Sum of %d numbers is %d", c, sum);
  return 0; 
}