// Passing structure members as arguments to functions
 #include<stdio.h>
 #include<string.h>
 struct student {
    char name[20];
    int roll;
    float marks; 
 };
 void display(char name[],int roll,float marks);
 int main() {
    struct student stu1;
    printf("Enter name, roll and marks : \n");
    scanf("%s %d %f",stu1.name,&stu1.roll,&stu1.marks);
    display(stu1.name,stu1.roll,stu1.marks);
    return 0;
 }
 void display(char name[],int roll,float marks) {
    printf("Name : %s\n",name);
    printf("Roll : %d\n",roll);
    printf("Marks : %.2f\n",marks); 
 }