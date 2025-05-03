// Program to assign one structure variable to another structure variable
#include<stdio.h>
#include<string.h>
typedef struct student {  // here if we use typedef we can use student instead of struct student in main function
                    // after typedef struct we may have tag name or not
    int roll;
    char name[20];
    float marks;
    } stu;       // here student is tag name
int main()
{
    stu s1= {1,"Saha",99.9};
    stu s2;
    s2=s1;
    printf("s1 : %d %s %.2f\n",s1.roll,s1.name,s1.marks);
    printf("s2 : %d %s %.2f\n",s2.roll,s2.name,s2.marks);
    return 0;
}