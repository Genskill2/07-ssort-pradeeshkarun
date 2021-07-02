#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void swap_max(int [], int, int );
void ssort(int [], int);

int main(void)
{
    int array[]={56,61,83,55,17,0,86,26,19,56,75,95,1,2,35,22};
    printf("\nOriginal Array:\n");

    for(int i=0;i<16;i++)
    {
      printf("%d ",array[i]);  
    }
    printf("\n\n");
   ssort(array,16);
   printf("\n\n");
}

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
