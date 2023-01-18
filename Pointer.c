//Pointer Simple Implementation

#include<stdio.h>
int main()
{
    int a = 100;
    int *b;

    b = &a;

    printf("int a =%d ",a);
    printf("\nint *b=%d",*b);
    printf("\n&a = %d",&a);
    printf("\n*(&a)=%d",*(&a));
    printf("\n*(&b)=%d",*(&b));
    printf("\nb=%d",b);
    printf("\n&b=%d",&b);
    
}
