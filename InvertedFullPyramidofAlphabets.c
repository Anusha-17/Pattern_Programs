#include <stdio.h>  
int main()  
{     
    int i, j, rows, k, m = 1;  
    printf (" Enter a number to define the rows: \n");  
    scanf ("%d", &rows);   
    printf("\n");    
    for ( i = rows; i >= 1; i--)  
    {  
        for ( j = 1; j <= m; j++)  
        {  
            printf ("  ");   
        }  
        // use for loop where k is less than equal to (2 * i -1)  
        for ( k = 1; k <= ( 2 * i - 1); k++)  
        {  
            printf ("%c ", 'A' + k - 1);   
        }  
        m++;  
        printf ("\n");  
    }  
    return 0;  
}  
