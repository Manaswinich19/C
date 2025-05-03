// Nested structures
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
   } stu1,stu2;
int main() {
    printf("Enter name, dob and time of student 1 :  \n");
    //scanf("%s %d %d %d %d %d %d",&stu1.name,&stu1.dob.day,&stu1.dob.month,&stu1.dob.year,&stu1.t.hr,&stu1.t.min,&stu1.t.sec);
    scanf("%s",stu1.name);
    scanf("%d %d %d",&stu1.dob.day,&stu1.dob.month,&stu1.dob.year);
    scanf("%d %d %d",&stu1.t.hr,&stu1.t.min,&stu1.t.sec);
    printf("Enter name, dob and time of student 2 : \n"); 
    scanf("%s %d %d %d %d %d %d",&stu2.name,&stu2.dob.day,&stu2.dob.month,&stu2.dob.year,&stu2.t.hr,&stu2.t.min,&stu2.t.sec);
    printf("Name : %s\n",stu1.name);
    printf("Date of birth : %d/%d/%d\n",stu1.dob.day,stu1.dob.month,stu1.dob.year);
    printf("Time : %d:%d:%d\n",stu1.t.hr,stu1.t.min,stu1.t.sec);
    printf("Name : %s\n",stu2.name);
    printf("Date of birth : %d/%d/%d\n",stu2.dob.day,stu2.dob.month,stu2.dob.year);
    printf("Time : %d:%d:%d\n",stu2.t.hr,stu2.t.min,stu2.t.sec);
    return 0;
}