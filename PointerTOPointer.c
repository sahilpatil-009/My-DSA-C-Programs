//Pointer To Pointer Simple Implementation
#include<stdio.h>
int main()
{
    int var;
    int *ptr;
    int **pptr;
    int ***ppptr;

    var = 100;
    ptr = &var;
    pptr = &ptr;
    ppptr =&pptr;

    printf("int var =%d",var);
    printf("\n&var =%d",&var);
    printf("\nint *ptr =%d",*ptr);
    printf("\n&ptr =%d",&ptr);
    printf("\nint **pptr =%d",**pptr);
    printf("\n&pptr =%d",&pptr);
    printf("\n**(&pptr) =%d",**(&pptr));
    printf("\n***ppptr =%d",***ppptr);
}
