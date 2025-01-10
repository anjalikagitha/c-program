
#include <stdio.h>
int main() {
    int i,j,n,count=0;
    printf("enter elements how many you want to store:");
    scanf("%d",&n);
    int a[n] ;
     printf("enter elements:");
   for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
   
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

      if(a[i]==a[j]) 
      {
          count++;
          break;
      }
        }
   
    }
    
    printf("the no of dup is %d",count);
  
    return 0;
}
