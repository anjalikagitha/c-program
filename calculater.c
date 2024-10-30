#include<stdio.h>
void main()
{
    int a,b;
    char op;
    printf("enter a & b values with operator");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        
        case'+':
        printf("Addition %d",a+b);
        break;
        case'-':
        printf("Subraction %d",a-b);
        break;
        case'*':
        printf("Multiplication %d",a*b);
        break;
        case'/':
        printf("Division %d",a/b);
        break;
        case'%':
        printf("Remainder %d",a%b);
        break;
        default:
        printf("error");
        break;
    }
}
