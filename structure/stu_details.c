//WAP to store student details using structure
#include<stdio.h>
#include<string.h>
int main()
{
    struct student{
      char name[20];
      int ID;
      float marks;
    }s1,s2,s3;
    s1.ID=1;s2.ID=2;s3.ID=3;
    s1.marks=70.34;s2.marks=83.66;s3.marks=65.75;
    printf("Name of 1st student is:%s\n",strcpy(s1.name,"Anushka Desai"));
    printf("ID is:%d\n",s1.ID);
    printf("Marks of 1st student is:%f\n",s1.marks);
    
    printf("Name of 2nd student is:%s\n",strcpy(s2.name,"Pranjal Desai"));
    printf("ID is:%d\n",s2.ID);
    printf("Marks of 2nd student is:%f\n",s2.marks);
    
    printf("Name of 3rd student is:%s\n",strcpy(s3.name,"Manan Desai"));
    printf("ID is:%d\n",s3.ID);
    printf("Marks of 3rd student is:%f\n",s3.marks);
}
