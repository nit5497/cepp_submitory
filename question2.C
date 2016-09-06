/*Given an array with all numbers present even number of time except one, find that number*/
#include<stdio.h>
int main(void)
{ 
   int i,ar[1000],n,ans;
   scanf("%d",&n);
   for(i=0;i<n;i++)
     scanf("%d",&ar[i]);
   ans=ar[0]^ar[1];
   for(i=2;i<n;i++)
     ans=ans^ar[i];
   printf("%d",ans);
   return 0;
}   