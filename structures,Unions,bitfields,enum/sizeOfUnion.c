#include<stdio.h>
union num{
    int i;
    long int l;
    float f;
    double d;
};
int main(void)
{
    union num arr[10];//union vriable decleration
    arr[0].i=12;/*assiging the array values with different datatypes*/
    arr[1].l=40000;
    arr[2].f=111.12;
    arr[3].d=23.34;
    printf("%d\t",arr[0].i);
    printf("%ld\t",arr[1].l);
    printf("%f\t",arr[2].f);
    printf("%f\n",arr[3].d);
    printf("size of union is %lu \n", sizeof(union num));
    printf("size of double is %d \n", sizeof(double));
    printf("size oflong int is %d \n", sizeof(long int));
    printf("size of double is %d \n", sizeof(int));
}