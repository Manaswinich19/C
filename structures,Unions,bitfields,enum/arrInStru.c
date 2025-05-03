// Array within a structure
#include<stdio.h>
#include<string.h>
typedef struct student {  // here if we use typedef we can use student instead of struct student in main function
                    // after typedef struct we may have tag name or not   
    char name[20];
    int roll;
    float marks[5];
    } stu;       // here student is tag name
int main()
{
        stu s1[3];
    for(int i=0;i<3;i++) 
    {
        printf("Enter name, roll of student %d : ",i+1);
        scanf("%s %d",s1[i].name,&s1[i].roll);
        for(int j=0;j<5;j++)
        {
            printf("Enter marks of subject %d : ",j+1);
            scanf("%f",&s1[i].marks[j]);
        }
    }
    for(int i=0;i<3;i++)
    {
        printf("Name : %s\n",s1[i].name);
        printf("Roll : %d\n",s1[i].roll);
        for(int j=0;j<5;j++) 
                printf("Marks of subject %d : %.2f\n",j+1,s1[i].marks[j]); 
        printf("\n");
    }
    return 0;
}