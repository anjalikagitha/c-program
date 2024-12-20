// program to print numbers 1 to n and nto 1 by using while loop
#include <stdio.h>

int main() {
    int n,i=1,j;
    printf("\nEnter a number:\n");
    scanf("%d",&n);
    while(i<=n)
    {
     printf("\nThe values from 1 to n is : %d\n",i);
     i++;
    }
    printf("\n");
    j=n;
    while(j>=0)
    {
        printf("\n The values from n to 1 i s :%d\n",j);
        j--;
    }
    

    return 0;
}
