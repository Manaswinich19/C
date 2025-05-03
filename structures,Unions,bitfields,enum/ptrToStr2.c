//Passing structure membera as argument to function
#include<stdio.h>
#include<string.h>
struct student {
    char name[20];
    int roll;
    float marks;
};
void display(char name[],int roll,float marks);
int main() {
   struct student stu1={"Ram",1,90.5}; 
   struct student stu2;
   strcpy (stu2.name,"Shyam");
   stu2.roll=2;
   stu2.marks=80.5;
   display(stu1.name,stu1.roll,stu1.marks);
   display(stu2.name,stu2.roll,stu2.marks);
   return 0;
}
void display(char name[],int roll,float marks) {
    printf("Name : %s\n",name);
    printf("Roll : %d\n",roll);
    printf("Marks : %.2f\n",marks); 
}