#include <stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);
void add (int a, int b)
    {
        printf("Addition of %d and %d is %d\n", a, b, a+b);
    }   
void sub (int a, int b)
    {
    printf("Subtraction of %d and %d is %d\n", a, b, a-b);
    }

void mul (int a, int b)
    {
        printf("Multiplication of %d and %d is %d\n", a, b, a*b);
    }

void div (int a, int b)
    {
        printf("Division of %d and %d is %d\n", a, b, a/b);
    }

int main()
{
   int a, b, choice;
   void (*fptr[4])(int, int) = {add, sub, mul, div}; 
   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);

   printf("Enter your choice: ");
   scanf("%d", &choice);
   printf("1- addition \n 2-subtraction \3 multiplication \t 4 division");

   if (choice >= 1 && choice <= 4)
                fptr[choice-1](a, b);
  else
      printf("Invalid choice\n");  
     return 0;
}