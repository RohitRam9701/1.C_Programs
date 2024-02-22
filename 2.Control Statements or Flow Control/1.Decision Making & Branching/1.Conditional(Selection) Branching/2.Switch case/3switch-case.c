#include<stdio.h>
void main()
{
//Simple calculator  
    int option, check=1; float a, b, result;
    printf("\nEnter first number: ");
    scanf("%f",&a);
    printf("\nEnter second number: ");
    scanf("%f", &b);
    printf("\nPress 1 to add, 2 to subtract, 3 to multiply, 4 to divide, 5 to exit: ");
    scanf("%d", &option);
    switch (option)
    {
        case 1 :result = a+b;break;
        case 2:result = a-b;break;
        case 3:result = a*b;break;
        case 4: if (b!=0)
                   result = a/b;
                else
                   {printf("\nDivision by 0 not allowed!");
                   check=0;
                   }
                break;
        case 5 :break;
        default:printf("\nYou have not entered a valid choice!");
                check=0;
    }
    if (check == 1) printf("\nThe required result = %f", result);
    
//Simple Calculator 
    char operation;
    double n1, n2;

    printf("\nEnter an operator (+, -, *, /): ");
    fflush(stdin);
    scanf("%c", &operation);
    printf("\nEnter two operands: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }  

/*Marks and grade:
Note that we have used a conversion statement 
where, index is defined as an integer. The variable index takes the following integer values. 
               Marks        Index 
               100           10
               90-99         9
               80-89         8
               70-79         7
               60-69         6 
               50-59         5
               40-49         4
                .            .
                .            .
                0            0     */  
    int index,marks;
    char grade;
    printf("\nEnter marks:");
    scanf("%d",&marks);
    index= marks/10; 
    switch (index)
    {  //3 empty cases:case 10,9 and 7
        case 10:
        case 9:
        case 8:           
              grade = 'H'; 
              break; 
        case 7: 
        case 6:
              grade = '1';
              break;
        case 5:
              grade = '2';
              break;
        case 4:
              grade = '3';
              break;
        default:
              grade = 'F';
              break;
    }   
    printf("Grade:%c\n", grade);

/*Calculating different area values using switch-case*/
    char optn; float s, area;
    printf("\nPress 'a' for Circle, 'b' for Square, 'e' to Exit: ");
    fflush(stdin); 
    scanf("%c", &optn);
    switch (optn) 
       {case 'A':/*Remember to put single quotes for character constants as 'A' etc*/ 
        case 'a': puts ("\nEnter radius of circle: "); 
                  scanf("%f", &s);
                  area = 3.14159*s*s;
                  printf("\nThe required area of circle = %0.2f", area);
                  break;
        case 'B':
        case 'b': puts ("\nEnter side of square: "); scanf("%f", &s);
                  area = s*s;
                  printf("\nThe required area of square = %0.2f", area); 
                  break;
        case 'E':
        case 'e': break;   
        default : puts ("\nYou have not entered a valid choice!");
        }  
}          
/*


Advantages of C switch Statement
1.Easier to read than if else if.
2.Easier to debug and maintain for a large number of conditions.
3.Faster execution speed.
4.It executes the different cases on the basis of the value of the switch variable whereas if-else executes the different blocks based on the 
  condition specified.

Disadvantages of C switch Statement
1.Switch case can only evaluate int or char type.
2.No support for logical expressions.
3.Have to keep in mind to add a break in every case.

*/