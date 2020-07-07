#include <stdio.h>
#include "lib_fact.h"
 
int main()
{
    int n, r, npr_var;
 
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("\nEnter the value of r:");
    scanf("%d", &r);
    
    /* nPr is also known as P(n,r), the formula is:
     * P(n,r) = n! / (n - r)! For 0 <= r <= n.
     */
    npr_var = fact(n) / fact(n - r);
    printf("\nThe value of P(%d,%d) is: %d \n",n,r,npr_var);

    return 0;
}
