#include<stdio.h>
void insertionsort(int a[],int n);
void main()
{
    int a[50],i,n;
    printf("enter size\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertionsort(a,n);
    printf("after sorting the elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
void insertionsort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j]) && (j>=0))
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
}
