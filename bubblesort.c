//Bubble sort
#include<stdio.h>
int main()
{
    int length;
    printf("Enter Length of Array:");
    scanf("%d", &length);

    int arr[length];

    printf("Enter Elements of Array:");
    
    for(int i=0;i<length;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements of array are:");
    for(int j=0;j<length;j++)
    {
        printf("%d\t", arr[j]);
    }

    printf("\nElements of Array in sorted Order:");
    int temp;
    int ptr;
    int count=0;
    for(int x=0;x<length;x++)
    {
       for(ptr = 0;ptr<length-x-1;ptr++) //it compare only two adjacent elements in array to compare
       {
           if(arr[ptr]>arr[ptr+1])
           {
               temp = arr[ptr];
               arr[ptr] = arr[ptr+1];
               arr[ptr+1] = temp;

               count++;
           }
       }
    }

    for(int j=0;j<length;j++)
    {
        printf("%d\t", arr[j]);
    }

    printf("\nNo of Shuffelels: %d", count);
}
