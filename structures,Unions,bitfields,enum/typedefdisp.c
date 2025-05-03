//Display the values of structure members
#include<stdio.h>
#include<string.h>
typedef struct  {  // here if we use typedef we can use student instead of struct student in main function
                    // after typedef struct we may have tag name or not
    int roll;
    char name[20];
    float marks;
    } student;       // here student is tag name
int main()
{
    student s1;         // here s1 is object of structure student, no need of struct student
   s1.roll=10;
   strcpy(s1.name,"Rahul");
   s1.marks=98.5;
   student s2={1,"Manu",99.5}; // 2nd way of initializing structure members
    student s3;                // 3rd way of initializing structure members
   printf("Enter the roll number: \n");
   scanf("%d",&s3.roll);
   printf("Enter the name:  \n");
   scanf("%s",s3.name);              //no need of &
   printf("Enter the marks: ");
   scanf("%f",&s3.marks);
   return 0;
}