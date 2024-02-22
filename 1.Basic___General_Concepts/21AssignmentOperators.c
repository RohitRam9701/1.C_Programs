/*
Assignment Operators:

1.Assignment (=): Assigns the value of the right operand to the left operand.
2.Compound Assignment(or Augmented Assignment) Operators (e.g., +=, -=, *=, /=, %=,>>=,<<=,&=,^=,|=): Performs the specified operation and assigns 
            the result to the left operand.

Operator 	Operation Performed                                        Meaning
= 	         Simple assignment                       Store the value of the second operand in the object specified by the first operand (simple 
                                                    assignment).

*= 	         Multiplication assignment            Multiply the value of the first operand by the value of the second operand; store the result in 
                                                    the object specified by the first operand.

/= 	         Division assignment                  Divide the value of the first operand by the value of the second operand; store the result in 
                                                    the object specified by the first operand.

%= 	         Remainder assignment                 Take modulus of the first operand specified by the value of the second operand; store the result 
                                                    in the object specified by the first operand.

+= 	         Addition assignment                  Add the value of the second operand to the value of the first operand; store the result in the 
                                                    object specified by the first operand. 

-= 	         Subtraction assignment               Subtract the value of the second operand from the value of the first operand; store the result 
                                                    in the object specified by the first operand.

<<= 	         Left-shift assignment                Shift the value of the first operand left the number of bits specified by the value of the 
                                                    second operand; store the result in the object specified by the first operand.

>>= 	         Right-shift assignment               Shift the value of the first operand right the number of bits specified by the value of the 
                                                    second operand; store the result in the object specified by the first operand.

&= 	         Bitwise-AND assignment               Obtain the bitwise AND of the first and second operands; store the result in the object 
                                                    specified by the first operand.(and_eq)

^= 	         Bitwise-exclusive-OR assignment      Obtain the bitwise exclusive OR of the first and second operands; store the result in the object 
                                                    specified by the first operand.(or_eq)

| = 	         Bitwise-inclusive-OR assignment      Obtain the bitwise inclusive OR of the first and second operands; store the result in the object 
                                                    specified by the first operand.(xor_eq)

*/
// Working of assignment operators
#include <stdio.h>
int main()
{
   int a = 21, c;
   c =  a;
   printf("Line 1 - =  Operator Example, Value of c = %d\n", c );
   c +=  a;
   printf("Line 2 - += Operator Example, Value of c = %d\n", c );
   c -=  a;
   printf("Line 3 - -= Operator Example, Value of c = %d\n", c );
   c *=  a;
   printf("Line 4 - *= Operator Example, Value of c = %d\n", c );
   c /=  a;
   printf("Line 5 - /= Operator Example, Value of c = %d\n", c );
   c  = 200;
   c %=  a;
   printf("Line 6 - %= Operator Example, Value of c = %d\n", c );
   c <<=  2;
   printf("Line 7 - <<= Operator Example, Value of c = %d\n", c );
   c >>=  2;
   printf("Line 8 - >>= Operator Example, Value of c = %d\n", c );
   c &=  2;
   printf("Line 9 - &= Operator Example, Value of c = %d\n", c );
   c ^=  2;
   printf("Line 10 - ^= Operator Example, Value of c = %d\n", c );
   c |=  2;
   printf("Line 11 - |= Operator Example, Value of c = %d\n", c );

   int x=5,y=10,z=10;
   x = y == z;
   printf("%d\n",x);//output=1 because == higher rank than =,so y==z i.e 10==10 is true(1),thus x=true=1

    int m=10;
    if (m=20)   printf("true");
    else  printf("false");
    /*Since the value of x after the assignment is non-zero (20), it is considered as a true condition, so it prints "t" as the 
      output. */     

   return 0;
}
/*
The result of an expression is converted to the type of the variable on the left of the assignment before assigning the value to it. 
Be careful about the loss of information during the conversion.

Do not use a variable in an expression before it has been assigned a value.
*/