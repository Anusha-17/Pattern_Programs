#include <stdio.h>  
int main()  
{  
    int i, j, n, k;  
    printf ("Enter a number of rows: \n");  
    scanf ("%d", &n);   
    printf("\n");    
    for ( i = n; i >= 1; i--)  
    {     
        for ( j = 1; j <= n-i; j++)  
        {  
            printf ("  "); // print the space  
        }  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("* "); // print the Star  
        }  
        printf ("\n");  
    }  
    for ( i =1; i <= n; i++)  
    {  
        for ( j = 1; j <= n - i; j++)  // To print space 
        {  
            printf ("  ");   
        }    
        for ( k = 1; k <= ( 2 * i - 1); k++)  // To print symbol
        {  
            printf ("* "); 
        }  
        printf ("\n");  
    }  
}  
