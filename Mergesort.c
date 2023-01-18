//Merge Sort
#include<stdio.h>

void mergesort(int arr[],int lb,int ub)
{      
    int mid;
        if(lb<ub)
        {
            mid = (lb+ub)/2;
            mergesort(arr,lb,mid);
            mergesort(arr,mid+1,ub);
        }

    combine(arr,lb,mid,ub);
}

void combine(int a[], int lb,int mid,int ub)
{
    int i =lb,j=mid+1,k=lb;
    int b[k+1];

    while(i<mid &&j<ub)
    {
        if(a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
        }
        else
        {
            b[k] = a[j];
            j++;
        }
        k++;
    }

    if(i>mid)
    {
        while(i<=ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k] = a[i];
            i++;
            j++;
        }
    }

    for(k=lb;k<=ub;k++)
    {
        a[k] = b[k];
    }
    for(int i=0;i<ub;i++)
    {
        printf("%d\n",a[i]);
    }
}

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

    int lb = 0;
    int ub = length;
    printf("\nSorted ARray is: ");
    mergesort(arr,lb,ub);

}
