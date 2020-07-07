// Filename lib_fact.c 
// Function for calculating factorial
#include <stdio.h>

 int fact(int num)
 {
     int k = 1, i;
     // factorial of 0 is 1
     if (num == 0)
     {
         return(k);
     }
     else
     {
         for (i = 1; i <= num; i++)
     {
             k = k * i;
     }
     }
     return(k);
 }
