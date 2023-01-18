//Write a C Program to find area and perimeter of different geometric shapes like circle, rectangle, square.
//Functions
#include<stdio.h>

void areaofcircle();

void areaofrectangle();

void areaofsquare();

int main()
{
    int ch;
    do{
    printf("1.Circle\n");
    printf("2.rectangle\n");
    printf("3.square\n");
    printf("4.Exit\n");
    printf("Enter Your Choice:\n");
    scanf("%d", &ch);

    switch(ch)
    {
        case 1:
            areaofcircle();
            break;

        case 2:
            areaofrectangle();
            break;

        case 3:
            areaofsquare();
            break;
        case 4:
            return 0;
            break;

        default : printf("Invalid Input !");
    }

    }while(ch != 4);
}

void areaofcircle()
{
    int r;
    int area,perimeter;
    printf("Enter Radius of Circle:");
    scanf("%d", &r);
    area = 3.14*r*r;
    perimeter = 2*3.14*r;

    printf("Area of Circle:%d\nPerimeter of Circle: %d\n",area,perimeter);
}

void areaofrectangle()
{
    int l,w,area,perimeter;
    printf("Enter Lenght:");
    scanf("%d", &l);
    printf("Enter Width:");
    scanf("%d", &w);

    area = l*w;
    perimeter = 2*l+w;

    printf("Area of Rectangle:%d\nPerimeter of Recatnagle:%d\n",area,perimeter);
}

void areaofsquare()
{
    int a,area,perimeter;
    printf("Enter Side of Square:");
    scanf("%d",&a);

    area = a*a;
    perimeter = 4*a;

    printf("Enter Area of Square:%d\nPerimeter of Square:%d\n",area,perimeter);
}
