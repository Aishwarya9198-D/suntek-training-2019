#include<stdio.h>
int main()
{
int r,i,j;
printf("enter number of rows");
scanf("%d",&r);
for(i=0;i<r;i++)
{


for(j=r;j>i;j--)
{
printf(" ");
}
for(int k=1;k<=i+1;k++)
{
    printf(" *");
}
    printf("\n");
}
return 0;

}




