/*
Bitwise Operators:
 
Bitwise logic:  1.Bitwise AND (&): Performs a bitwise AND operation on the binary representation of the operands.
                                   It is used to multiply 2 binary nos.,bitwise.
                                   12 = 00001100 (In Binary)
                                   25 = 00011001 (In Binary)

                                   Bit Operation of 12 and 25
                                             00001100
                                           & 00011001
                                             ________
                                             00001000  = 8 (In decimal)

                2.Bitwise OR (|) : Performs a bitwise OR operation on the binary representation of the operands.
                                   It is used to add 2 binary nos.,bitwise.
                                   12 = 00001100 (In Binary)
                                   25 = 00011001 (In Binary)
 
                                   Bitwise OR Operation of 12 and 25
                                               00001100
                                             | 00011001
                                               ________
                                               00011101  = 29 (In decimal)

                3.Bitwise XOR (^): Performs a bitwise XOR (exclusive OR) operation on the binary representation of the operands.
                                   It is used to find the X-OR of 2 binary nos.,bitwise.
                                   12 = 00001100 (In Binary)
                                   25 = 00011001 (In Binary)

                                   Bitwise XOR Operation of 12 and 25
                                             00001100
                                           ^ 00011001
                                             ________
                                             00010101  = 21 (In decimal)   

                4.Bitwise NOT or Bitwise Complement Operator (~): Flips/Inverts the bits of the operand./Binary One's Complement Operator is unary
                                                                  and has the effect of 'flipping' bits.

                                    35 = 00100011 (In Binary)

                                    Bitwise complement Operation of 35
                                    ~ 00100011 
                                      ________
                                      11011100  = 220 (In decimal)  
                                      
Twist in Bitwise Complement Operator in C Programming: The bitwise complement of 35 (~35) is -36 instead of 220, but why?

For any integer n, bitwise complement of n will be -(n + 1). To understand this, you should have the knowledge of 2's complement.  

                                    2's Complement
Two's complement is an operation on binary numbers. The 2's complement of a number is equal to the complement of that number plus 1. For example:

 Decimal         Binary           2's complement 
   0            00000000           -(11111111+1) = -00000000 = -0(decimal)
   1            00000001           -(11111110+1) = -11111111 = -256(decimal)
   12           00001100           -(11110011+1) = -11110100 = -244(decimal)
   220          11011100           -(00100011+1) = -00100100 = -36(decimal)

Note: Overflow is ignored while computing 2's complement.
The bitwise complement of 35 is 220 (in decimal). The 2's complement of 220 is -36. Hence, the output is -36 instead of 220.

Bitwise Complement of Any Number N is -(N+1). Here's how:

bitwise complement of N = ~N (represented in 2's complement form)
2'complement of ~N= -(~(~N)+1) = -(N+1)

Bitwise shifts or Shift operators : 1.shift left(<<) or left shift or Binary Left Shift Operator. The left operands value is moved left by the 
                                      number of bits specified by the right operand
                                      Left shift operator shifts all bits towards left by a certain number of specified bits. The bit positions 
                                      that have been vacated by the left shift operator are filled with 0. The symbol of the left shift operator 
                                      is <<.

                                      212 = 11010100 (In binary)
                                      212<<1 = 110101000 (In binary) [Left shift by one bit]
                                      212<<0 = 11010100 (Shift by 0)
                                      212<<4 = 110101000000 (In binary) =3392(In decimal)

                                    2.shift right(>>) or right shift or Binary Right Shift Operator. The left operands value is moved right by 
                                      the number of bits specified by the right operand.
                                      Right shift operator shifts all bits towards right by certain number of specified bits. It is denoted by >>.

                                      212 = 11010100 (In binary)
                                      212 >> 2 = 00110101 (In binary) [Right shift by two bits]
                                      212 >> 7 = 00000001 (In binary)
                                      212 >> 8 = 00000000 
                                      212 >> 0 = 11010100 (No Shift)

Let’s look at the truth table of the bitwise operators.

   X       Y       X & Y       X | Y       X ^ Y       

   0       0         0           0           0

   0       1         0           1           1

   1       0         0           1           1

   1       1         1           1           0                                      
*/
#include<stdio.h>
void main()
{ 
   unsigned int a = 60;	/* 60 = 0011 1100 */  
   unsigned int b = 13;	/* 13 = 0000 1101 */
   int c = 0;           

   c = a & b;       /* 12 = 0000 1100 */ 
   printf("Line 1 - Value of c is %d\n", c );
  //d=decimal ,b=binary
  //output:if  x=(10)d=(1010)b and y=(12)d=(1100)b ,then z=x&y=(1010)b*(1100)b=(1000)b=(8)d  

   c = a | b;       /* 61 = 0011 1101 */
   printf("Line 2 - Value of c is %d\n", c );
   //d=decimal ,b=binary
   //output:if  x=(10)d=(1010)b and y=(12)d=(1100)b ,then z=x|y=(1010)b+(1100)b=(1110)b=(14)d

   c = a ^ b;       /* 49 = 0011 0001 */
   printf("Line 3 - Value of c is %d\n", c );
   //d=decimal ,b=binary
   //output:if  x=(10)d=(1010)b and y=(12)d=(1100)b ,then z=x^y=(1010)bXOR(1100)b=(0110)b=(6)d   

   c = ~a;          /*-61 = 1100 0011 */
   printf("Line 4 - Value of c is %d\n", c );

   c = a << 2;     /* 240 = 1111 0000 */
   printf("Line 5 - Value of c is %d\n", c );

   c = a >> 2;     /* 15 = 0000 1111 */
   printf("Line 6 - Value of c is %d\n", c );

  int x,y,z1,z2;
  printf("\n Enter values:");scanf("%d%d",&x,&y);
  z1=x<<y;
  z2=x>>y;
  printf("\n z1:%d\nz2:%d",z1,z2);
  //d=decimal ,b=binary
  //output:if  x=(12)d=(1100)b and y=(2)d=(0010)b ,then z1=x<<y=(110000)b=(48)d and z2=x>>y=(0011)b=(3)d
  //output:if  x=(2)d=(0010)b and y=(12)d=(1100)b ,then z1=x<<y=(10000000000000)b=(8192)d and z2=x>>y=(000.000000000001)b=(0)d 

   int num=212, i;

    for (i = 0; i <= 2; ++i) {
        printf("Right shift by %d: %d\n", i, num >> i);
    }
    printf("\n");

    for (i = 0; i <= 2; ++i) {
        printf("Left shift by %d: %d\n", i, num << i);    
    }
}