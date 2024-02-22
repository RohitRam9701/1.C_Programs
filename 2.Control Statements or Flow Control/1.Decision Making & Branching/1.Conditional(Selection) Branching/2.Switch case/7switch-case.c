/*
1. Find errors, if any, in the following switch related statements. Assume that the variables x and y are of int type and x = 1 and y = 2
  (a) switch (y);
  (b) case 10;
  (c) switch (x+y)
  (d) switch (x) {case 2: y = x + y; break};
Answer:
  (a) Error : wrong use of ";" and this statement is incomplete. A switch statement should have at least one case enclosed in braces {}.
      Correction : switch (y) { // Assuming you intend to compare the value of y
                        // ... your cases here
                        }
  (b) Error : This case statement is not inside a switch block. Case statements should always be inside a switch block.                    
      Correction : switch (expression) { // Replace 'expression' with your intended comparison
              case 10:
              // Code to execute if expression evaluates to 10
              break;
              // ... other cases
              }
  (c) Error : No error in the syntax as long as you intend to compare the sum of x and y against case values. In this case, with x = 1 and y = 2, 
              it evaluates to 3. But this switch statement is incomplete. It should have at least one case.
      Correction : switch (x + y) { // Assuming you intend to compare the value of x+y
                        // ... your cases here
                        }  
   (d) Error : Wrong use of semicolon and  incorrect syntax for multiple case statements. Each case value needs to be on a separate line.
       Correction : switch (x) {
               case 2: y = x + y;
                break;
               // ... other case statements
               }

2. Assuming that `x = 2`, `y = 1` and `z = 0` initially, what will be their values after executing the following code segments?
   (a) 
     switch (x)
     {
         case 2:
             x = 1;
             y = x+1;
         case 1:
             x = 0;
            break;
         default:
             x = 1;
             y = 0;
     }
   (b) 
   switch (y)
     {
         case 0:
             x=0;
             y=0;
         case 2:
             x=2;
             z=2;
         default:
             x=1;
             y=2;
     }

Answer:
(a) Given `x = 2`, `y = 1` and `z = 0` initially, after executing this code segment, `x` would be `0` and `y` would be `2`. The `case 2:` falls 
    through to `case 1:` because there is no `break` statement, so `x` is set to `0`.
    - Final values : `x = 0`, `y = 2`, and `z = 0`.
(b) Again, assuming `x = 2`, `y = 1` and `z = 0` initially, after executing this code segment, `x` would be `1` and `y` would be `2`. The `case 2:` 
    is not executed because `y` is not `2` initially, so it goes to the `default:` case.
    - Final values : `x = 1`, `y = 2`, and `z = 0`.

3. What will be the output of the following code segment when it is executed?
    char ch = 'a';
    switch (ch)
    {
        case 'a':
        printf("A");
        case 'b':
        printf("B");
        default:
        printf("C");
    }
    //Output: ABC [The output for ch = 'a' is “ABC” because there are no break statements to stop the code after each case.]

*/ 