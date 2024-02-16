#include<stdio.h>
int main()
{
   int a[50],i,j,n;
   printf("enter array size");
   scanf("%d",&n);
   printf("enter array elements");
   for(i=0;i<n;i++)
   
   scanf("%d",&a[i]);
   
   printf("the reverse of array is");
   for(j=n-1;j>=0;j--)
   printf("%d",a[j]);
}
   
