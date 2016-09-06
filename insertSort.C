#include<stdio.h>
void insertsort(int a[],int n)
{
   int i,j,temp;
   for(i=1;i<n;i++)
    {
      k=a[i];
      j=j-1;
      while(j>=0 && a[j]>k)
      {
        a[j+1]=a[j];
        j--;
      }
      a[j+1]=k;
    }
}
int main(void)
{
    int n,i,ar[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&ar[i]);
    insertsort(ar,n)
    for(i=0;i<n;i++)
      printf("%d ",ar[i]);
    return 0;
}
