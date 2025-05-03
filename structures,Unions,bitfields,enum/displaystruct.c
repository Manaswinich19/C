//Display the values of structure members
#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[20];
    float marks;
    };
int main()
{
   struct student s1;
   s1.roll=10;
   strcpy(s1.name,"Rahul");
   s1.marks=98.5;
   struct student s2={1,"Manu",99.5};
   struct student s3;
   printf("Enter the roll number: \n");
   scanf("%d",&s3.roll);
   printf("Enter the name:  \n");
   scanf("%s",&s3.name);
   printf("Enter the marks: ");
   scanf("%f",&s3.marks);
   printf("s1 : %d %s %.2f\n",s1.roll,s1.name,s1.marks);
   printf("s2 : %d %s %.2f\n",s2.roll,s2.name,s2.marks);
   printf("s3 : %d %s %.2f\n",s3.roll,s3.name,s3.marks);
   return 0;
}