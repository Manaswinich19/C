// use of size of operator in pointers

#include<stdio.h>
int main()
{
	int arr[5]={1,2,3,4,5};
	int *ptr=arr;
	printf("size of array is %d \t *arr is %d",sizeof(arr),sizeof(*arr));//array size=5*4=20, arr*=>integer=4
	printf("\nsize of ptr is %d \t *ptr is %d",sizeof(ptr),sizeof(*ptr));//ptr size=8, *ptr=>value at the address =>integer=4
	printf("\nsize of int is %d  \t *int is %d",sizeof(int),sizeof(int*));
    printf("\nsize of char is %d,\t *char is %d",sizeof(char),sizeof(char*));
	printf("\nsize of ptr is %d  \t *ptr is %d",sizeof(ptr),sizeof(*ptr));
	printf("\nsize of int is %d  \t  *int is %d",sizeof(int),sizeof(int*));
    printf("\nsize of char is %d, \t *char is %d",sizeof(char),sizeof(char*));
    printf("\nsize of float is %d  \t *float is %d",sizeof(float),sizeof(float*));
    printf("\nsize of double is %d  \t *double is %d",sizeof(double),sizeof(double*));
    printf("\nsize of long is %d   \t  *long is %d",sizeof(long),sizeof(long*));
	return 0;

}