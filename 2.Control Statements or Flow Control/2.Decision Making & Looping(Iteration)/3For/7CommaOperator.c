/* Additional features of for loop
   The comma operator in general allows two expressions to appear at a place, where otherwise only one expression would have been used. 
   The general syntax of the comma operator is:
       for(expression_1a,expression_1b,...; expression_2; expression_3a,expression_3b,...)
             |_________________________|     |________|      |____________________|     
                          |                       |                    |
                          |                       |                    |
          Multiple initializations       Single condition    Multiple updations(modifications)                

// Additional Features of for Loop
// The for loop in C has several capabilities that are not found in other loop constructs. 
// For example, more than one variable can be initialized at a time in the for statement. 
// The statements
p = 1;
for (n=0; n<17; ++n)
// can be rewritten as,
for (p=1, n=0; n<17; ++n)

// Note that the initialization section has two parts p = 1 and n = 1 separated by a comma.
// Like the initialization section, the increment section may also have more than one part. For example, 
for (n=1, m=50; n<=m; n=n+1, m=m-1)
{
    p = m/n;
    printf("%d %d %d\n", n, m, p);
}
// is perfectly valid. The multiple arguments in the increment section are separated by commas.
// The third feature is that the test-condition may have any compound relation and the testing need not be limited only to the loop control variable. Consider the example below:
sum = 0;
for (i = 1; i < 20 && sum < 100; ++i)
{
    sum = sum+i;
    printf("%d %d\n", i, sum);
}
// The loop uses a compound test condition with the counter variable i and sentinel variable sum. The loop is executed as long as both the conditions i <20 and sum <100 are true. The sum is evaluated inside the loop.
// It is also permissible to use expressions in the assignment statements of initialization and increment sections. For example, a statement of type
for (x = (m+n)/2; x > 0; x = x/2)
// is perfectly valid.


// Another unique aspect of for loop is that one or more sections can be omitted, if necessary. Consider the following statements:
m = 5;
for ( ; m != 100 ; )
{
    printf("%d\n", m);
    m += 5;
}
// Both the initialization and increment sections are omitted in the for statement. The initialization has been done before the for statement and the control variable is incremented inside the loop. In such cases, the sections are left ‘blank’. However, the semicolons separating the sections must remain. If the test-condition is not present, the for statement sets up an infinite loop. Such loops can be broken using break or goto statements in the loop.
// We can set up time delay loops using the null statement as follows:
for ( j = 1000; j > 0; j -=1)
// This loop is executed 1000 times without producing any output; it simply causes a time delay. Notice that body of loop contains only a semicolon known as a null statement. This can also be written as follows:
for (j=1000; j > 0; j -=1) ;
// This implies that C compiler will not give an error message if we place a semicolon by mistake at end of a for statement. The semicolon will be considered a null statement.







Sure, here are the summarized points with examples:

1. **Omission of Sections**: In a `for` loop, one or more sections can be omitted. For example:
```c
m = 5;
for ( ; m != 100 ; )
{
    printf("%d\n", m);
    m += 5;
}
```
Here, both the initialization and increment sections are omitted in the `for` statement.

2. **Infinite Loops**: If the test-condition is omitted, it results in an infinite loop, which can be broken using `break` or `goto`.

3. **Time Delay Loops**: Time delay loops can be set up using null statements, causing a delay without producing output. For example:
```c
for ( j = 1000; j > 0; j -=1) ;
```
This loop is executed 1000 times without producing any output; it simply causes a time delay.

4. **Compound Test Conditions**: The test-condition may have any compound relation and isn't limited to the loop control variable. For example:
```c
sum = 0;
for (i = 1; i < 20 && sum < 100; ++i)
{
    sum = sum+i;
    printf("%d %d\n", i, sum);
}
```
Here, the loop uses a compound test condition with the counter variable `i` and sentinel variable `sum`.

5. **Expressions in Initialization and Increment**: It is permissible to use expressions in the assignment statements of initialization and increment sections. For example:
```c
for (x = (m+n)/2; x > 0; x = x/2)
```
This statement is perfectly valid.
*/
