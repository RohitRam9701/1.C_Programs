/*Structure of while loop :
Initialize_loop_counter;       //Optional
while (condition)
{
  statements;
  .. .. .. ..
  change_loop_counter;         //Optional
}
*/
/*Problem:The ABC electric company. manufacturers for consumer products. Their inventory position on a particular day is given below.
 Code                          Quantity                   Rate (Rs)
 F105                          275                        575.00    
 H220                          107                        99.95
 I019                          321                        215.50
 M315                          89                         725.00
 
 It is required to prepare the inventory report table in the following format:
 
 Inventory report.
    Code                          Quantity                   Rate             Value
    ----                           ----                      ----              ----
    ----                           ----                      ----              ----
    ----                           ----                      ----              ----
    ----                           ----                      ----              ----
                                                   Total value:               ------
 
 The value of each item is given by the product of quantity and rate.                                                   */


 /*The Given program reads the data from the terminal and generates the required output. the Prudan uses. subscripted variables which are 
 discussed in array chapter.*/
 #include<stdio.h>
 #define ITEMS 4
 int main()
 {/*Begin*/
   int i, quantity[5]; 
   float rate [5], value, total_value;
   char code [5] [5];
  /* READING VALUES */ 
   i = 1;
   while (i <= ITEMS)
   {
    printf("Enter code, quantity, and rate:");
    scanf("%s %d %f", code[i], &quantity[i], &rate[i]);
    i++;
   }
  /*.......Printing of Table and Column Headings.......*/ 
   printf("\n\n");
   printf("        INVENTORY REPORT         \n");
   printf("------------------------\n");
   printf("  Code    Quantity   Rate    Value \n");
   printf("------------------------\n");
  /*.......Preparation of Inventory Position...........*/
  total_value = 0;
  i = 1;
  while (i<=ITEMS)
  {
    value = quantity[i] *rate[i];
    printf("%5s %10d %10.2f %e\n",code[i],quantity[i],rate[i],value);
    total_value += value;
    i++;
  } 
  /*.......Printing of End of Table.......*/
  printf("------------------------\n");
  printf("                Total value: %e\n",total_value);
  printf("------------------------\n");
  return 0;
 }/*End*/