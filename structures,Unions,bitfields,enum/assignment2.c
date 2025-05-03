#include<stdio.h>
#include<string.h>
struct student{
    char student_name[21];
    int roll_no;
    float student_cgpa;
};

//Function to read student details
void read_student_details(struct student stu[],int n){
   for(int i=0;i<n;i++){
    printf("Enter the student name: ");
    scanf("%s",stu[i].student_name);
    printf("Enter the student roll no: \n");
    scanf("%d",&stu[i].roll_no);
    printf("Enter the student cgpa: \n");
    scanf("%f",&stu[i].student_cgpa);
   } 
}
//Function to search student by name
struct student search_student_by_name(struct student stu[],int n,char name[]){
    for(int i=0;i<n;i++){
        if(strcmp(stu[i].student_name,name)==0){
            return stu[i];
        }
     }
      // If not found, return an empty structure (name = "")
      struct student not_found = {"", 0, 0.0};   // not_found.student_name[0] = '\0';
      return not_found;
}
//Function to search student by roll number
struct student search_student_by_roll(struct student stu[],int n,int roll){
    for(int i=0;i<n;i++){
        if(stu[i].roll_no==roll){
            return stu[i];
        }
     }

      // If not found, return an empty structure (name = "") 
      struct student not_found = {"", 0, 0.0};
      return not_found;
}

//Function to print students with CGPA greater than a given value
void print_students_with_cgpa_greater_than(struct student stu[],int n,float cgpa){
printf("Students with CGPA greater than %.2f:\n", cgpa);
    for(int i=0;i<n;i++){
        if(stu[i].student_cgpa>cgpa){
            printf("Student name: %s, Roll No: %d, CGPA: %f\n",stu[i].student_name,stu[i].roll_no,stu[i].student_cgpa); 
        }  
    }  
}
 

int main(){
    struct student stu[100];
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    read_student_details(stu,n);        //function call to read student details

    char name[21];
    printf("Enter the name of the student to search: ");
    scanf("%s",name);
    struct student stu_found = search_student_by_name(stu, n, name);
    if (stu_found.student_name[0] != '\0') //checking the student  name is upto  null character
    {
        printf("Student found: Name: %s, Roll No: %d, CGPA: %f\n", stu_found.student_name, stu_found.roll_no, stu_found.student_cgpa);

        } else 
        {
            printf("Student not found\n");
        }
        
    int search_roll;                      // Variable for roll number to search
    printf("\nEnter a roll number to search: ");
    scanf("%d", &search_roll);              // // Read roll number
    struct student stu_found1 = search_student_by_roll(stu, n, search_roll);

    if (stu_found1.student_name[0] != '\0') // Check if student is found
    {
        printf("Student found: Name: %s, Roll No: %d, CGPA: %f\n", stu_found1.student_name, stu_found1.roll_no, stu_found1.student_cgpa);
    }
    else
    {
        printf("Student not found\n");
    }

    float cgpa;
    printf("\nEnter the CGPA to search: ");
    scanf("%f", &cgpa);
    // function call to print students with CGPA greater than the given value
    print_students_with_cgpa_greater_than(stu, n, cgpa);
    return 0;
}