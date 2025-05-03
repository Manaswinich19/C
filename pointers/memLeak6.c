#include <stdio.h>
#include <stdlib.h>
int main()
{
        int *p1;
            {
                int temp=5;

                p1=&temp;
                printf("\n p1 = %p \n",p1);
                printf(" temp=%d \n",temp);
                printf("p1++=%p \n",p1+1);

            }
             printf("  p1  when out of the scope is %p \n",p1);
             printf("p1+1=%p \n",p1+1);
            //printf("temp=%d \n",temp);
    return 0;
}
