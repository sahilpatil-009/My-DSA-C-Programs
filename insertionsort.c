//Insertion Sort
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

    printf("\nSorted ARray is: ");
    int temp,ptr;
    for(int i = 1;i<length;i++)
    {
        temp = arr[i];
        ptr = i-1;

        while(temp<arr[ptr])
        {
            arr[ptr+1] = arr[ptr];
            ptr = ptr-1;
        }
        arr[ptr+1] = temp;
    }

    for(int j=0;j<length;j++)
    {
         printf("%d\t", arr[j]);
    }
}
