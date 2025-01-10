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
   printf("the reverse of a array is\t:");
    
    for(i=n-1;i>=0;i--)
    {
    printf("%d\n",a[i]);
    
    }
    
    return 0;
}
