/*Escape sequences*/
#include <stdio.h>
void main()
{
/* These three lines show you how to use the most popular Escape
Sequences */
printf("Column A\tColumn B\tColumn C");
printf("\nMy Computer\'s Beep Sounds Like This: \a!\n");
printf("\"Letz\bs fix that typo and then show the backslash ");
printf("character \\\" she said\n");
/* Here is some more code to help you with printf(), Escape
Sequences, and Conversion Characters */
printf("Quantity\tCost\tTotal\n");
printf("%d\t\t$%.2f\t$%.2f\n", 3, 9.99, 29.97);
printf("Too many spaces \b\b\b\b can be fixed with the ");
printf("\\%c Escape character\n", 'b');
printf("\n\a\n\a\n\a\n\aSkip a few lines, and beep ");
printf("a few beeps.\n\n\n");
printf("%s %c.", "You are kicking butt learning", 'C');
printf("You just finished chapter %d.\nYou have finished ", 4);
printf("%.1f%c of the book.\n", 12.500, '%');
printf("\n\nOne third equals %.2f or ", 0.333333);
printf("%.3f or %.4f or ", 0.333333, 0.333333);
printf("%.5f or %.6f\n\n\n", 0.333333, 0.3333333);
/*To know key tricks*/
printf("\2\3\4\5\6");
/*To use the escape sequences & thus show a 31 days month*/
printf("left\bright\n");
printf("left\rright\n");
printf("left\fright\n");
printf("left\n\0right\n");
printf("Press \"right\"\n");
printf("Press \'right\'\n");
printf("Type \\n for a new line\n\n");

printf("S\tM\tT\tW\tT\tF\tS\n");
printf("\t\t1\t2\t3\t4\t5\n");
printf("6\t7\t8\t9\t10\t11\t12\n");
printf("13\t14\t15\t16\t17\t18\t19\n");
printf("20\t21\t22\t23\t24\t25\t26\n");
printf("27\t28\t29\t30\t31");
printf("\nPress \"Enter\" to start");
}
/*Escape Sequence                      Character It Produces                            
    \a                             Audible Alert (Bell) (“beep!”)
    \b                             Backspace, non-erasing
    \f                             Form feed or clear the screen
    \n                             Newline
    \r                             Carriage return
    \t                             Horizontal Tab(fixed space)
    \v                             Vertical Tab
    \\                             Backslash character
    \?                             Question mark
    \’                             Single quote
    \”                             Double quote
    \0                             Null
    \xnn                           Hexadecimal character code nn
    \onn                           Octal character code nn
    \nn                            Octal character code nn
*/

    
    