/*
#include<stdio.h>

long fact(int );

int main()
{
	int no;
	scanf(“%d”, &no);
	long f = fact(no);
	printf(“Factorial is %ld”, f);
}

long fact(int n)
{
	 if (n == 0)
		return(1);
	int f = n * fact(n-1);
	return(f);
}

*/
#include<stdio.h>

int fact(int n);
int main()
{
    int no,f;
    printf("Enter Number:");
    scanf("%d", &no);

    f = fact(no);
    printf("Factorial of %d is %d",no,f);
}

int fact(int n)
{
    int f;
    if(n == 0)
    {
        return 1;
    }
    f = n * fact(n-1);
    return f;
}
