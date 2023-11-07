#include<stdio.h>
int main()
{
int i,j,m,n,a[20],b[10],c[20];
printf("\nenter the no of elements of the first array:");
scanf("%d",&m);
printf("\nenter the element of the 1st array:");
for(i=0;i<m;i++)
scanf("%d",&a[i]);
printf("\nenter the no of elements of the second array:");
scanf("%d",&n);
printf("\nenter the element of the 2nd array:");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<m;i++)
c[i]=a[i];
j=i;
for(i=0;i<n;i++,j++)
c[j]=b[i];
printf("the merged array:");
for(i=0;i<m+n;i++)
printf("%d",c[i]);
}


