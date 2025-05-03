//Passing array of structures as argument to function with comments
#include<stdio.h>
struct student {
    char name[20];
    int roll;
    float marks;
};
void display(struct student);   //function prototype
void dec_marks(struct student stuarr[]); //function prototype
int main() {
    struct student stuarr[3]={{"Ram",1,90},{"Shyam",2,80},{"Sita",3,70}};
    int i; 
    dec_marks(stuarr); //passing array of structures as argument to function
    for(i=0;i<3;i++) {
        display(stuarr[i]);//passing structure as argument to function
    }
    return 0;
}
void dec_marks(struct student stuarr[]) {
    int i;
    for(i=0;i<3;i++) {
        stuarr[i].marks -=10;      //strarr[i].marks = strarr[i].marks - 10;
    }
}
void display(struct student stu) {
    printf("Name : %s\t",stu.name);
    printf("Roll : %d\t",stu.roll);
    printf("Marks : %.2f\n",stu.marks); 
}