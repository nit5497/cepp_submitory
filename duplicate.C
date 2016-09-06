
// Code to find if an array has any duplicate element using complexity O(n)

#include<stdio.h>

int main(void)
 {
    int n,i,ar[10000],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    { 
       if(ar[i]<0 || ar[i]==999)
       {
         count++;
         break;
       }
       else if(ar[ar[i]]==0)
         ar[ar[i]]=999;
       else
         ar[abs(ar[i])]*=-1;
    }
     if(count==1)
       printf("Yes\n");
     else 
       printf("No\n");
      return 0;
}