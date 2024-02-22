/*Range in switch case can be useful when we want to run the same set of statements for a range of numbers so that we do not have to 
  write cases separately for each value.
    That is the case range extension of the GNU C compiler and not standard C.
    You can specify a range of consecutive values in a single case label.
  The syntax for using range case is:     case low ... high:
  It can be used for a range of ASCII character codes like this:       case 'A' ... 'Z':
  You need to Write spaces around the ellipses ( … ). For example, write this:
     // Correct  -   case 1 ... 5: 
     // Wrong -    case 1...5:       */
// C program to illustrate using range in switch case
#include <stdio.h>
int main()
{
	int arr[] = { 1, 5, 15, 20 };

	for (int i = 0; i < 4; i++) {
		switch (arr[i]) {
			// range 1 to 6
		case 1 ... 6:
			printf("%d in range 1 to 6\n", arr[i]);
			break;
			// range 19 to 20
		case 19 ... 20:
			printf("%d in range 19 to 20\n", arr[i]);
			break;
		default:
			printf("%d not in range\n", arr[i]);
			break;
		}
	}
	return 0;
}

/*Output:
    1 in range 1 to 6
    5 in range 1 to 6
    15 not in range
    20 in range 19 to 20
Complexity Analysis:
    Time Complexity: O(n), where n is the size of array arr.
    Auxiliary Space: O(1)
Error conditions
    low > high: The compiler gives an error message.
    Overlapping case values: If the value of a case label is within a case range that has already been used in the switch statement, 
    the compiler gives an error message.
Exercise
    You can try the above program for a char array by modifying the char array and case statement.*/
