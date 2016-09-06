
//Code to sort array using quicksort.

#include<stdio.h>

void qS(int[],int,int);
int partition(int[],int,int);
int main(void)
{
  int n,ar[100],i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  { 
    scanf("%d",&ar[i]);
  }
  qS(ar,0,n-1);
  for(i=0;i<n;i++)
    printf("%d ",ar[i]);
  return 0;
}

void qS(int ar[],int low,int high)
{
  int pivot;
  if(low<high)
  {
    pivot=partition(ar,low,high);
    qS(ar,low,pivot-1);
    qS(ar,pivot+1,high);
  }
}

int partition(int ar[],int low,int high)
{
   int i=low,j=high,p_el=ar[high],t;
   while(i<=j)
   {
     while(ar[i]<p_el)
     i++;
     while(ar[j]>=p_el)
     j--;
     if(i<j)
     {
       t=ar[i];
       ar[i]=ar[j];
       ar[j]=t;
     }
   }
    
   ar[high]=ar[i];
   ar[i]=p_el;
   return i;
}    