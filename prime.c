#include <stdio.h>
int main() {
    int n,i,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("it is a prime");
    }
    else
    {
        printf("not a prime");
    }
  
    return 0;
}
