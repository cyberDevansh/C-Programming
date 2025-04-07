#include <stdio.h>
#include <stdarg.h>

// Variadic function to add numbers

int addition(int n, ...){

   va_list args;
   int i, sum = 0;

   va_start (args, n);  
  
   for (i = 0; i < n; i++){    
      sum += va_arg (args, int);    
   }

   va_end (args);    
  
   return sum;
}

int main(){

   printf("Sum = %d ", addition(5, 1, 2, 3, 4, 5));
   
   return 0;
}