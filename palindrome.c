#include<stdio.h>
int main()
{
int n,temp,rev=0,rem;
printf("enter th value\n");
scanf("%d",&n);
temp=n;
while(n>0)
{
    rem=n%10;
    rev=(rev*10)+rem;
    n=n/10;
}
if(rev==temp)
{
    printf("it is palindrome");
}
else
{
    printf("not a palindrome");
}

return 0;
}
