#include <stdio.h>
#include <string.h>

struct student
{
            int rollno;
            char name[20];
            
};
struct student s[10];

int main()
{
    int i,n;
printf("enter no of students");
scanf("%d",&n);
printf("enter the details");
for(i=0;i<n;i++)
{
            printf("\n");
scanf("%s",&s[i].name);
scanf("%s",&s[i].rollno);
}
printf("details of students");
for(i=0;i<n;i++)
{

            printf("\n");
            printf(" Name is: %s \t", s[i].name);
            printf(" rollno is: %s \t", s[i].rollno);
            }
return 0;
}
