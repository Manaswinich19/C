// Array of structures
#include<stdio.h>
#include<string.h>
typedef struct student {
    int roll;
    char name[20];
    float marks;
    } stu;
int main()
{
    stu s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the roll number , name, marks  \n");
        scanf("%d %s %f",&s[i].roll,s[i].name,&s[i].marks);
    }
    for(i=0;i<5;i++)
    printf("%d %s %.2f\n",s[i].roll,s[i].name,s[i].marks);
    return 0;
}