                                                /*Iteration statement (Loop structure) in C program*/
/*When a number of statements in a program is to be repeatedly executed as long as the given condition is satisfied,the statements are to be put 
  into a loop structure */

/* 
//Program to find average of three numbers

#include<stdio.h>
int main()
{
    float num1, num2, num3, sum=0, average;
    printf("\nEnter number: ");
    scanf("%d", &num1);
    sum = sum + num1;          //Adds num1 to the last value of sum i.e. 0
    printf("\nEnter number: ");
    scanf("%d", &num2);
    sum = sum + num2;          //Adds num2 to the last value of sum i.e. num1
    printf("\nEnter number: ");
    scanf("%d", &num3);
    sum = sum + num3;          //Adds num3 to the last value of sum i.e. num1+num2
    average = sum/3;
    printf("\nAverage of the numbers is %.2f", average);
    return 0;
}
 There are two problems with this approach:
  i) Repeating code for large inputs is inefficient. It wastes time, memory, and lengthens the program. 
  ii) In case the number of times to repeat the code is not known beforehand and depends upon one or more conditions.

 Solution : A loop structure is a better approach.

// Pseudocode to find average of three numbers using loop
#include<stdio.h>
int main()
{
    int count=1; 
    float num, sum=0.0, average;
    //repeat lines 38 to 41 as long as value in count is less than or equal to 3
    printf("\nEnter Number: ");
    scanf("%d", &num);
    sum = sum + num;
    count = count + 1;
    //end_of_loop
    average = sum/count;
    printf("\nAverage of %d numbers is %.2f", count, average);
    return 0;
}

// Program to find average of three numbers using while loop
#include<stdio.h>
int main()
{
    int count=1; 
    float num, sum=0, average;
    while (count<=3)
    {
        printf("\nEnter number: ");
        scanf("%d", &num);
        sum = sum + num;
        count = count + 1;
    }
    average = sum/count;
    printf("\nAverage of %d numbers is %.2f", count, average);
    return 0;
}
*/

/*
// Use of while loop to print from 1 to 5
#include<stdio.h>
int main()
{
    int count=1;
    while(count <= 5) <---------------|  //When last line in the body of the loop is reached, control goes back to loop header to recheck condition.    
    {                                 | 
        printf("\nNumber %d", count); |
        ++count; ---------------------|
    }
//  In short
//  int count = 0;
//  while (++ count <= 5)
//     printf("\n Number %d", count);         
    return 0;
}

*/

/* Calculate the sum of squares of all integers between 1 and 10 using if-else.
            .......
            .......
            sum = 0;
            n = 1;
       |--->loop:
       |    sum = sum + n*n;
    L  |    if (n == 10)
    O  |       goto print;---|
    O  |    else             |
    P  |    {                |    n = 10,
       |        n = n + 1;   |    end of loop
       |------- goto loop;   |
            }                |
            print: <---------|
           .....
           .....

    1. `n` is the counter variable and `sum` is the sum of squares of all integers between 1 and 10.
    2. If n < 10, then the loop body is executed and the sum of squares of all integers between 1 and 10 is calculated.
    3. The value of n is incremented by 1 and the loop is repeated until n = 10.
    4. When n = 10, the loop is terminated and the program jumps to the print label and prints the sum of squares of all integers between 1 and 10.
    6. The program terminates.

    The program evaluates the statement sum = sum + n*n;  10 times. That is, the loop is executed 10 times and the sum of squares of all integers 
    between 1 and 10 is calculated.

   A program loop is a control flow structure that allows a block of code to be executed repeatedly. A loop consists of two main parts: 
     1. the control statement 
     2. the body of the loop

/* Calculate the sum of squares of all integers between 1 and 10 using loop
    #include<stdio.h>
    int main()
    {
        int n, sum = 0;          // n = counter variable (a single control variable)

      //using for loop  
        for (n = 1; n <= 10; n++)// control statement: This is the part of the loop that determines whether the loop will execute or not. 
                                 // It includes the initialization, condition, and increment/decrement operation. For example, in a for loop, 
                                 // the control statement might look like this: for (int i = 0; i < 10; i++)
        {
            sum = sum + n * n;   // body of the loop: This is the part of the loop that gets executed as long as the condition in the control 
                                 // statement is true. It's enclosed in curly braces {} following the control statement.
        }
        printf("Sum of squares of all integers between 1 and 10 is %d", sum);

      //using while loop
        n = 1;                        //Initialization
        while (n <= 10)               //Testing   
        {
            sum = sum + n * n;
            n = n + 1;                //Incrementing
        }
        printf("\nSum of squares of all integers between 1 and 10 is %d", sum);

      //using do-while loop
        n = 1;
        do
        {
            sum = sum + n * n;
            n = n + 1;
        } while (n <= 10);
        printf("\nSum of squares of all integers between 1 and 10 is %d", sum);  
        return 0;
    }
*/

/* 
Syntax:
  1. for( initialization(initialise_loop_counter); test condition(check_condition); updation (increment or decrement or modify_counter))  
     // one control statement, also note that it has semicolons ';' after each part and not a comma ','. The two semicolons must be kept.
      {
          statement(s);   // body of the loop
      }

     e.g.
     // Initialization; Condition; Increment 
     for(int i = 0; i < 3; i++) {
        // 'i' is initialized to 0, the loop continues while 'i' is less than 3, and 'i' is incremented by 1 in each iteration 
        printf("i: %d\n", i);
     }

     int f,n,i;
     printf("\n Enter number:");scanf("%d",&n);
     for(i=n,f=1;i>0;i--)   // here i = n and f = 1 both are parts of initialization, so comma',' was used
     {
      f=f*i;
     } 
     printf("\n Factorial of the number:%d",f);
      
  2. while( condition)      // more than one control statement
      {
          statement(s);     // body of the loop
      }
     
     e.g.
     int i = 0;             // Initialization
     while(i < 3)           // Condition
     {
       printf("i: %d\n", i);
       i++;                 // Increment
     }
 
  3. do                   // more than one control statement
      {
          statement(s);   // body of the loop
      }
     while( condition)    

     e.g.
     int i = 0;                // Initialization
     do {
        printf("i: %d\n", i);
        i++;                   // Increment
     } while(i < 3);           // Condition

Note : In a control statement, specifically in a loop, the control variable is the one that determines the number of times the loop will 
       execute. It's the variable that gets initialized, tested, and updated each time through the loop.

       for (int i = 0; i < 10; i++)
       {
          int j = i * 2;
          printf("i: %d, j: %d\n", i, j);
       }

       Here, i is the control variable, but j is not, even though it is in the control statement (the body of the loop). j is calculated 
       each time through the loop, but it does not control the execution of the loop. So, it's not accurate to say that all variables in 
       the control statement are control variables. Only the ones that control the execution of the loop are called control variables.
       
Note : The braces are needed only if the body contains two or more statements. However, it is a good practice to use braces even if the 
       body has only one statement.

Loops in programming can be categorized based on various factors. Here are some common categorizations:

1. Based on the position of the control statement (Loop Condition):
    - Pre-test loop (for and while loops): These loops evaluate the condition before each iteration. They are also known as Entry-Controlled 
       loops. For example, in a `for` loop, the condition is checked before the loop body is executed.
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
    - Post-test loop (do-while loop): These loops evaluate the condition after each iteration. This ensures that the loop body is executed at 
      least once, regardless of the condition. They are also known as Exit-Controlled loops. For example:
     
     int i = 0;
     do {
         printf("%d ", i);
         i++;
     } while(i < 10);
     
2. Based on the number of iterations (Loop Control Variable):
   - Counter-Controlled Loop (Definite Loop): The number of iterations is known before the loop starts. This is typically controlled by a counter 
     variable that is initialized before the loop starts, and then incremented or decremented with each iteration of the loop. This is often 
     implemented using a `for` loop. For example:
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
   - Sentinel-Controlled Loop (Indefinite Loop): The number of iterations is not known in advance. The loop continues until it encounters a 
     special value (the sentinel). This is common when you don't know how many times you need to loop, such as reading user input or processing 
     data from a file until a certain condition is met. This can be implemented using `while` or `do-while` loops. For example:
     
     int i;
     while(scanf("%d", &i), i != -1) {
         printf("%d ", i);
     }
     
     =========
     character = ' ';                // character is initialized to ''. 
     while(character != 'Y')         // character is tested to be 'Y'
         character = getchar();      // since character is '', the loop continues to read characters from standard input executing 
                                     // character = getchar() until Y is pressed.
     xxxxxxxxx;                      // condition = false when character = Y, and the loop terminates, thus transferring the control to the 
     =========                       // statement xxxxxxxxx. The character constant 'y' is sentinel value.the variable character is condition 
                                     // variable (sentinel variable).
          

     int input;
     do {
          printf("Enter a number (0 to stop): ");
          scanf("%d", &input);
     } while(input != 0);  //In this example, 0 is the sentinel value. The loop will continue to ask for input until the user enters 0.
        
     int input, sentinel = -1;
     do {
          printf("Enter a number (-1 to stop): ");
          scanf("%d", &input);
     } while(input != sentinel);  //In this example, -1 is the sentinel value. The loop will continue to ask for input until the user enters -1.

3. Based on Loop Structure:
   - Unnested Loop (Simple Loop): Basic loop structure with a single condition and loop body. For example:
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
   - Multi-Level Loop (Nested Loop): One loop embedded within another. For example:
     
     for(int i = 0; i < 5; i++) {
         for(int j = 0; j < 5; j++) {
             printf("%d ", i*j);
         }
         printf("\n");
     }
   - Infinite Loop: Loop that never terminates (usually unintentional). For example:
     
     while(1) {
         printf("This is an infinite loop\n");
     }

     for(;;) {
        printf("This is an infinite loop\n");
    }

     
4. Based on the Number of Control Statements:
   - Single-Control Loop: Only one control statement is present. This is typically a `for` loop, where the initialization, condition check, and 
     increment/decrement are all part of a single statement. For example:
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
   - Multiple-Control Loop: More than one control statement is present. This is typically a `while` or `do-while` loop, where the initialization 
     is done before the loop, the condition check is done as part of the loop statement, and the increment/decrement is done inside the loop body. 
     For example:
     
     int i = 0;
     while(i < 10) {
         printf("%d ", i);
         i++;
     }
     
5. Based on Flag Control:
   - Flag-Controlled Loop: A type of loop that uses a boolean flag to control its execution. A flag is a variable (usually a boolean) that signals 
     when a certain condition is met. When the flag is set (usually to `true`), it indicates that a specific condition has occurred, and this can 
     be used to control the flow of the program. For example:
     
     int flag = 1;
     while(flag) {
         printf("The flag is set\n");
         flag = 0;
     }
     
6. Based on the Type of Data They Iterate Over:
   In C programming, loops are not typically categorized based on the type of data they iterate over. However, you can use different loops to 
   iterate over different types of data structures to get the similar functionality.

   - Array-Based Loop: This type of loop iterates over elements in an array. It's commonly used when you want to perform an operation on each 
     element in an array. It is also known as For-Each Loop or Range-Based Loop or Collection-Based Loop. For example:
     
     int arr[5] = {1, 2, 3, 4, 5};
     for(int i = 0; i < 5; i++) {
         printf("%d ", arr[i]);
     }
   - Pointer-Based Loop: This type of loop uses a pointer to iterate over elements in a data structure. For example:
     
     int arr[5] = {1, 2, 3, 4, 5};
     int *ptr = arr;
     for(int i = 0; i < 5; i++) {
         printf("%d ", *(ptr + i));
     }
     
7. Based on the Step (Iteration Direction):
    - Descending Loop (Decrementing Loop): This type of loop reduces the counter variable in each iteration until a certain condition is satisfied. 
      An example of this is a for loop that counts downwards. For example:
     
     for(int i = 10; i > 0; i--) {
         printf("%d ", i);
     }
    - Ascending Loop (Incrementing Loop): This type of loop increases the counter variable in each iteration until a certain condition is satisfied. 
      This is commonly seen in most for loops. For example:
     
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
     
8. Based on the Order of Execution:
   - Sequential Loop: This type of loop executes the loop body sequentially. For example:
   
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
     printf("\n");
     
   - Parallel Loop: This type of loop executes the loop body in parallel. For example:
     
     // Parallel loop (conceptual) 
     #pragma omp parallel for  //The #pragma omp parallel for directive tells the compiler to execute the following for loop in parallel.
     for(int i = 0; i < 10; i++) {
         printf("%d ", i);
     }
     printf("\n");  

   Please note that the output of the parallel loop may not be in order due to the nature of parallel execution. Also, using parallel programming 
   constructs like OpenMP requires a system with multiple processing units (like a multi-core processor) and a compiler that supports it. Otherwise, 
   the code will just run sequentially.

Note that the following examples are based on the same loop, but they demonstrate different types of loops.   
    
- For Loop (Definite(counter controlled), Entry-Controlled(pre test), Single-Control):

for(int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
In this example, `i` is the counter. The loop will execute 10 times, and `i` will increment by 1 after each iteration.

- While Loop (Indefinite(sentinel controlled), Entry-Controlled(pre test), Multiple-Control):

int i = 0;
while(i < 10) {
    printf("%d\n", i);
    i++;
}
In this example, the loop will execute as long as `i` is less than `10`.

- Do-While Loop (Indefinite(sentinel controlled), Exit-Controlled(post test), Multiple-Control):

int i = 0;
do {
    printf("%d\n", i);
    i++;
} while(i < 10);

*/
/*************************************************************************************************************************************/

#include<stdio.h>
int main()
{
/*To take 5 nos. from user and find the product of the nos. using `for` loop*/
  int n,c,p;
  for (c = 0, p = 1; c < 5; c++)
  {
   printf("\n Enter number:");scanf("%d",&n);
   p*=n; 
  }  
  printf("\n Product of numbers:%d",p);

/*To take 5 nos. from user and find the sum of the nos. using `while` loop*/
  int num,count=0,s=0;
  while(count<5) 
  {
   printf("\n Enter number:");scanf("%d",&num);
   s+=num;
   count+=1; 
  }  
  printf("\n Sum of numbers:%d",s);  

  /*To take 5 nos. from user and find the sum of the nos. using `do-while` loop*/
  int number,num_count=0,sum=0;
  do
  {
   printf("\n Enter number:");scanf("%d",&number);
   sum+=number;
   num_count+=1; 
  }  
  while(num_count<5);
  printf("\n Sum of numbers:%d",sum);

  return 0;
}