// Returning a pointer from structure to a function
#include<stdio.h>
typedef struct Student  {
    char name[20];  //student name max 19 characters + 1 for null character
    int roll;
    float marks;
}student;   //aliasing name for struct Student
/* Function declarations  */
//Takes a pointer to a student structure and displays its contents
void display(student *);
//Takes two pointers to student structures and returns the pointer to the student with higher marks
 student *func(student *s1,student *s2);
int main() {
    student *topper;    //pointer to hold student with higher marks
    //Initialize two student variables with some values
    student stu1={"Ram",1,90.5};
    student stu2={"Shyam",2,80.5};
    //Pass the addresses of the two students to the func function and store the result in the topper pointer
    topper=func(&stu1,&stu2);
    //Display the details of the student with higher marks
    display(topper);
    return 0; 
}
/*Function Definitions  */
//returns the pointer to the student with higher marks
student *func(student *s1,student *s2) {
    if(s1->marks > s2->marks) 
        return s1;
    else 
        return s2;
}
    //Display the details of the student with higher marks via pointer
    void display(student *topper) {
        printf("Name : %s\n",topper->name);
        printf("Roll : %d\n",topper->roll);
        printf("Marks : %.2f\n",topper->marks);
       }
