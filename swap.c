#include <stdio.h>
#include <assert.h>
#include <stdlib.h>



void swap_max(int a[], int L, int n)
{
  int swp=a[n];
  int count=n;
  for(int i=n ; i<L ; i++)
  {
    if(a[i]>swp)
    {
      swp=a[i];
      count=i;
    } 
  }
  a[count]=a[n];
  a[n]=swp;
} 


void ssort(int arr[], int l)
{
  for(int p=0;p<l;p++)  
  {
    swap_max(arr,l,p);
  }
  printf("Sorted Array:\n");

  for(int p=0;p<l;p++)
  {
      printf("%d ",arr[p]); 
  }


}
