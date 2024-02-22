/*5. Write a program to illustrate the use of typedef declaration in a program.*/ 

#include <stdio.h>

typedef int Integer;

int main() {
    Integer num = 42;
    
    printf("Number: %d\n", num);

    return 0;
}       
/*In this program, the `typedef` declaration is used to create a new name `Integer` for the type `int`. The program then uses `Integer` as a data 
  type to declare a variable `num` and assigns a value to it.*/    

/*
#include <stdio.h>

typedef int Age;
typedef float Height;

int main() {
    Age myAge = 25;
    Height myHeight = 1.75;

    printf("Age: %d\n", myAge);
    printf("Height: %.2f\n", myHeight);
*/