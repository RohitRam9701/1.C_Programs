/*Structure of do-while loop :
Initialize_loop_counter;       // Optional
do
{
  statements;
  .. .. .. ..
  change_loop_counter;         // Optional
}while (condition);            // semicolon is used here

The do-while loop is similar to the while loop in that it continues as long as the condition remains True. But apart from structural difference 
and condition-checking, the main difference is that the while loop may or may not execute at all depending upon the condition. In contrast, the 
do-while loop will execute at least once before testing the condition.
*/
// To print number from 0 to 9 using do-while loop.
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("i = %d\n", i);
        i++;
    } while (i < 10);
    return 0;
}