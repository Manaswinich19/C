//Passing pointer to structure variable as argument to function
#include<stdio.h>
struct student {
    char name[20];
    int roll;
    float marks;
};
void display(struct student *ptr);
void inc(struct student *ptr);
int main() { 
   struct student stu1={"Ram",1,90};
   struct student stu2={"Shyam",2,80};
   inc(&stu1);
   inc(&stu2);

   display(&stu1);
   display(&stu2);
  
   //printf("marks of stu1 after increment : %.2f\n",stu1.marks);
   //printf("marks of stu2 after increment : %.2f\n",stu2.marks);
   return 0;
}
void display(struct student *ptr) {
    printf("Name : %s\n",ptr->name);
    printf("Roll : %d\n",ptr->roll);
    printf("Marks : %.2f\n",ptr->marks); 
}
void inc(struct student *ptr) {
    ptr->marks++;
}


