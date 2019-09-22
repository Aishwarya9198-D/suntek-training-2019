#include<stdio.h>
void count(int *a,int n)
{
int i=0;
int arr[10]={0};
for(i=0;i<n;i++)
{
arr[a[i]]++;
}
for(i=0;i<10;i++)
if(arr[i]>i)
printf("%d repeated %d times\n",i,arr[i]);
}
void main()
{
int a[100],i,n;
printf("enter the size of array");
scanf("%d,&n");
printf("enter the elements in the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
count(a,n);
}
