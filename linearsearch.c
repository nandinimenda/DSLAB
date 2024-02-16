#include<stdio.h>
int main()
{
  int a[50],i,n,search;
  printf("enter array size");
  scanf("%d",&n);
  printf("enter array elements");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("what element you want to search");
  scanf("%d",&search);
  for(i=0;i<n;i++)
  {
    if(a[i]==search)
    {
      printf("the element is found at %d",search);
      
      break;
    }
  }
  if(i==n)
  printf("element not found");
}    
