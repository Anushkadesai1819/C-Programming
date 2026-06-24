//using structure in function
#include<stdio.h>
#include<string.h>
struct student{
       char name[20];
       int ID;
    };
  struct student s1;
void structurePrinting(struct student student1);
int main()
{
    s1.ID=22;
    structurePrinting(s1);
}
void structurePrinting(struct student student1)
{
    printf("Name of student is:%s\n",strcpy(student1.name,"Anushka Desai"));
    printf("ID of student1 is:%d",student1.ID);
}
