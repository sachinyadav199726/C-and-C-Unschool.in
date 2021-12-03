#include<stdio.h>
struct employee
{
char ename[10];
float sal;
char id[20];
int workexp;
};
struct employee emp[5];
int i,j;
void ask()
{
for(i=0;i<5;i++)
{
   printf("\nEnter %dst Employee record:\n",i+1);
   printf("\nEmployee name:\t");
   scanf("%s",emp[i].ename);
   printf("\nEnter Salary:\t");
   scanf("%f",&emp[i].sal);
   printf("\nEnter employee-id:\t");
   scanf("%s",emp[i].id);
   printf("\nEnter work-experience:\t");
   scanf("%d",&emp[i].workexp);
}
printf("\nDisplaying Employee record:\n");
for(i=0;i<5;i++)
{
printf("\nEmployee name: %s",emp[i].ename);
printf("\nSalary: %f",emp[i].sal);
printf("\nEmployee-Id: %s",emp[i].id);
printf("\nWork-experience: %d\n\n",emp[i].workexp);
}
}
void main()
{
  ask();
}



