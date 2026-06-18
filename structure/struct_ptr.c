//accessing structure elements using pointers
#include<stdio.h>
#include<string.h>
int main()
{
 struct student{
     char name[20];
 };
 struct student s1;
 strcpy(s1.name,"Anushka Desai");
 struct student *ptr=&s1;
 printf("Name of the student is:%s\n",s1.name);
 printf("Name of student(using pointer) is:%s\n",(*ptr).name);
 printf("Name of student(using pointer) is:%s\n",ptr->name);
 
}
