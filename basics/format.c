#include <stdio.h>
int main(){
    
    float c,a,b;
    c=a/b;
    printf("Enter float variables: ");
    scanf("%3f %2f", &a, &b);
    //printf("Values: %2.1f, %1.2f\n",a, b );
    printf("Result: %2.1f",c);

    return 0;
} 