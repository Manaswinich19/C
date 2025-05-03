//pointer to structure
#include<stdio.h>
#include<string.h>
struct time {
    int hr;
    int min;
    int sec;
    };
struct date {
    int day;
    int month;
    int year;
};
struct student {
   char name[20];
   struct date dob;
   struct time t; 
};
int main() {
    struct student stu1,stu2;
    struct student *ptr1,*ptr2;
    ptr1=&stu1; 
    printf("Enter name, dob and time of student 1 :  \n");
    scanf("%s",ptr1->name);
    scanf("%d %d %d",&ptr1->dob.day,&ptr1->dob.month,&ptr1->dob.year);
    scanf("%d %d %d",&ptr1->t.hr,&ptr1->t.min,&ptr1->t.sec);
    ptr2=&stu2;
    printf("Enter name, dob and time of student 2 : \n");
    scanf("%s",ptr2->name);
    scanf("%d %d %d",&ptr2->dob.day,&ptr2->dob.month,&ptr2->dob.year);
    scanf("%d %d %d",&ptr2->t.hr,&ptr2->t.min,&ptr2->t.sec);
   
    printf("Name : %s\n",ptr1->name);
    printf("Date of birth : %d/%d/%d\n",ptr1->dob.day,ptr1->dob.month,ptr1->dob.year);
    printf("Time : %d:%d:%d\n",ptr1->t.hr,ptr1->t.min,ptr1->t.sec);

    printf("Name : %s\n",ptr2->name);
    printf("Date of birth : %d/%d/%d\n",ptr2->dob.day,ptr2->dob.month,ptr2->dob.year);
    printf("Time : %d:%d:%d\n",ptr2->t.hr,ptr2->t.min,ptr2->t.sec);
    return 0;
}