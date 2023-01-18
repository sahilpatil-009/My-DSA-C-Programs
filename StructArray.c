//Implementation of Array using structure
#include<stdio.h>
#include<stdlib.h>
struct student{

    int roll_no;
    int marks;

}arr[5];

int main()
{
    for(int i=0;i<5;i++)
    {
        printf("Enter roll no:");
        scanf("%d",&arr[i].roll_no);
        printf("\nEnter Marks:");
        scanf("%d",&arr[i].marks);
    }

    printf("Data in Structure is:");

    
    for(int j=0;j<5;j++)
    {
        printf("\nRoll No:%d\t",arr[j].roll_no);
        printf("Marks:%d",arr[j].marks);
    }

}
