// realloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *pa,*pb,n;
    pa=(int*)malloc(5*sizeof(int));
    if(pa)
    {
        printf("%u bytes allocated,storing integers: \n  ",5*sizeof(int));
        for(n=0;n<5;n++)
            printf("%d\n",pa[n]=n);
    }
    if (pb)
        {
        printf("\n %u bytes are allocated,after the first 10 integers:  \n",10*sizeof(int));
        for(n=5;n<=10;n++)
          {  
            printf("%d\n",pb[n]=n);
          }
        printf("after reallocating memory: \n ");
       for(n=0;n<=10;n++)
                {          
                        printf("%d\n",pb[n]=n);
                }
                        free(pb);
        }
        else
    
            free(pa);
return 0;
}