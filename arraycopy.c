
#include <stdio.h>
int main() {
    int i,n;
    printf("enter elements how many you want to store:");
    scanf("%d",&n);
    int a[n] ,b[n];
     printf("enter elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
   
    
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        
    }
    printf("the element of b array are\n");
    for(i=0;i<n;i++){
    printf("%d\n",b[i]);
    }
    
    
  
    return 0;
}
