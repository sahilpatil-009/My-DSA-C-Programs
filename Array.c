#include<stdio.h>
int main()
{
    int length;

    printf("Enter Length of Array:");
    
    scanf("%d",&length);
    /*
    int intarr[length];
    printf("Enter Elements of Int ARRY:\n");
    for(int i=0;i<length;i++)
    {
        scanf("%d", &intarr[i]);
    }

    printf("Elemtnts in Array are:\n");
    for(int j=0;j<length;j++)
    {
        printf("%d \n",intarr[j]);
    }
////////////////////////////////////////////////////////
    char chararr[length];
    printf("Enter characters in array:\n");
    for(int i=0;i<length;i++)
    {
        scanf("%s",&chararr[i]);
    }

    printf("Elements of Array are:\n");
    for(int j=0;j<length;j++)
    {
        printf("%c\n",chararr[j]);
    }
//////////////////////////////////////////////////////////

    double dobarr[length];
    printf("Enter double numbers in array:\n");
    for(int i=0;i<length;i++)
    {
        scanf("%lf", &dobarr[i]);
    }

    printf("Elements of Array Are:\n");
    for(int j=0;j<length;j++)
    {
        printf("%lf\n", dobarr[j]);
    }
    */
///////////////////////////////////////////////////////////
    float flotarr[length];
    printf("Enter float elements in array:\n");
    for(int i=0;i<length;i++)
    {
        scanf("%f",&flotarr[i]);
    }
    printf("Elements of ARRay:\n");
    for(int j=0;j<length;j++)
    {
        printf("%f \n", flotarr[810]);
    }

}

