//Selection Sort
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
    for(int i=0;i<length;i++)
    {
        for(int j = i+1;j<length;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

     for(int j=0;j<length;j++)
        {
            printf("%d\t", arr[j]);
        }
}
