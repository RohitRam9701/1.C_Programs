/*
switch(ch1) {

   case 'A': 
      printf("This A is part of outer switch" );
		
      switch(ch2) {
         case 'A':
            printf("This A is part of inner switch" );
            break;
         case 'B': /* case code 
      }
	  
      break;
   case 'B': /* case code 
}

*/

#include <stdio.h>  
int main () {  
//ex 1  
   int i = 10;  
   int j = 20;  
   
   switch(i) {  
     
      case 10:   
         printf("the value of i evaluated in outer switch: %d\n",i);  
      case 20:  
         switch(j) {  
            case 20:  
               printf("The value of j evaluated in nested switch: %d\n",j);  
         }  
   }  
     
   printf("Exact value of i is : %d\n", i );  
   printf("Exact value of j is : %d\n", j );  
   
//ex 2
   int a = 100;
   int b = 200;
 
   switch(a) {
   
      case 100: 
         printf("This is part of outer switch\n", a );
      
         switch(b) {
            case 200:
               printf("This is part of inner switch\n", a );
           }
   }
   
   printf("Exact value of a is : %d\n", a );
   printf("Exact value of b is : %d\n", b );   
   return 0;  
}  
