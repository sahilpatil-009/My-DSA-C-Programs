//Pass By Value Pass By References
#include<stdio.h>

void callbyvalue_swap(int a,int b)
{
    int temp;
    temp = a;
    a=b;
    b=temp;

    return;
}

void callbyvalue_refrences(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    return;
}
int main()
{
    int a,b;
    printf("Enter Nos to Swap\n");
    printf("Enter a=");
    scanf("%d", &a);
    printf("Enter b=");
    scanf("%d", &b);

    printf("Elements Before Swap: a=%d and b=%d\n",a,b);

    callbyvalue_swap(a, b);
    printf("Using Call By Value\n");
    printf("Swaped Elemets are:\n a=%d and b=%d",a,b);
    printf("\n---------------------------------------------------------\n");
    printf("---------------------------------------------------------\n");

   /*IMP: If the code Above is run, the values "remain same the Same after the Swap function is run" this
    is Because, C is Passing in copies of the Variable (a and b in this case) and they are Modified
    within the function, but not in originals remain unaffected*/

    callbyvalue_refrences(&a,&b);
    printf("Using Call By refrences\n");
    printf("Swaped Elemets are:\n a=%d and b=%d",a,b);

}
