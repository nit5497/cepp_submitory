#include<stdio.h>
#include<stdlib.h>
void quickSort(int arr[], int left, int right)
 {
      int i = left, j = right;
      int tmp;
      int pivot = abs(arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (abs(arr[i] < pivot)
                  i++;
            while (abs(arr[j]) > pivot)
                  j--;
            if (i <= j) {
                  tmp = abs(arr[i]);
                  abs(arr[i])= abs(arr[j]);
                  abs(arr[j]) = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main(void)
{
	int n,i,ar[200000],small=0,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	  scanf("%d",&ar[i]);
	  
	quickSort(ar,0,n-1);
	
	for(i=0;i<n;i++)
	 {
	 	s=ar[i]+ar[i+1];
	 	if(s<small)
	 	{
	 		small=s;
		 }
	 }
	 for(i=0;i<n-1;i++)
	 {
	 	s=ar[i]+ar[i+1];
		 if(s==small)
		 {
		 	printf("%d %d ",ar[i],ar[i+1]);
		  }	
	 }
	return 0;
}
