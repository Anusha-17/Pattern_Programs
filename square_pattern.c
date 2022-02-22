#include<stdio.h>
int main()
{
   int n,r,c;
   printf("Enter the number of rows: ");
   scanf("%d",&n);
   for(r=1; r<=n; r++) //r=rows
   {
     for(c=1; c<=n; c++) //c=columns
     {
       printf("* ");
     }
     printf("\n");
   }

   return 0;
}
