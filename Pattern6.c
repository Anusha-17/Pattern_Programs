#include <stdio.h>  
int main()  
{    
    int i, j, n, k;  
    printf (" Enter a number of rows: \n");  
    scanf ("%d", &n);   
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
    return 0;  
}  
