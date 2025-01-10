#include <stdio.h>

int main() {
    int i,n;
    printf("enter elements how many you want to store:");
    scanf("%d",&n);
    int a[n] ;
     printf("enter elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    } 
    printf("the elements are\n");
    for(i=0;i<n;i++)
    {
    printf("%d\n",a[i]);
    }
    
    return 0;
}
