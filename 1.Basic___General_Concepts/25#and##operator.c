/*
**two preprocessor operators:1.string-ize or string-izing operator(#):This operator causes the corresponding actual argument to be enclosed in 
                               double quotation marks. The # operator, which is generally called the stringize operator, turns the argument it 
                               precedes into a quoted string.
                             2.token-pasting operator(##):Allows tokens used as actual arguments to be concatenated to form other tokens. It is 
                               often useful to merge two tokens into one while expanding macros.This is called token pasting or token concatenation. 
                               The ‘##’ pre-processing operator performs token pasting. When a macro is expanded, the two tokens on either side of 
                               each ‘##’ operator are combined into a single token, which then replaces the ‘##’ and the two original tokens in the 
                               macro expansion.
*/
#include <stdio.h>
#define mkstr(s) #s
#define m 8.3297
#define MAX(i, j) (i > j ? i : j)
#define concat(a, b) a##b
int main(void)
{
    // # operator
	printf(mkstr(geeksforgeeks));//preprocessor turns the line printf(mkstr(geeksforgeeks)); into printf(“geeksforgeeks”);
    printf("\nValue of m is:%f",m) ;//value of m is replaced by macro
    //To find out maximum out of two numbers using macro
    int p = 250, q = 25;  
    printf("\nThe maximum is %d", MAX(p, q));
    // ## operator
    int xy = 30;
	printf("\n%d", concat(x, y));//The preprocessor transforms printf(“%d”, concat(x, y)); into printf(“%d”, xy);
	return 0;
    /*
    Application: The ## provides a way to concatenate actual arguments during macro expansion. If a parameter in the replacement text is adjacent 
    to a ##, the parameter is replaced by the actual argument, the ## and surrounding white space are removed, and the result is re-scanned.
    */
}