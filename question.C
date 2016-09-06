/*We are given n-1 integers and these integers are in range 1 to n. There are no duplicates but an integer is missing. Find that integer*/

#include<stdio.h>

int main(void)
 {
   int n,sum=0,var,i,ar[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
     scanf("%d",&ar[i]);
   var=(n*(n+1))/2;
   for(i=0;i<n;i++)
      sum+=ar[i];
   printf("%d",sum-var);
   return 0;
}