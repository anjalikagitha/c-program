#include <stdio.h>
int main() {
   int i,j;
   int n=1;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=i;j++)
       {
           printf("%d\t",n);
           n++;
           
       }
       printf("\n");
   }
   for(i=5;i>=1;i--)
   {
       for(j=1;j<=i;j++)
       {
           printf("%d\t",n);
           n++;
           
       }
       printf("\n");
   }
    return 0;
}
