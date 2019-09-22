#include<stdio.h>
int main()
{
int r,i,j;
printf("enter number of rows");
scanf("%d",&r);
for(i=r;i>=1;i--)
{


for(j=0;j<r-i;j++)
{
printf(" ");
}
for(int j=(2-i);j<(2-i)+(2*i-1);j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
