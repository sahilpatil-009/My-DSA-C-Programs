#include<stdio.h>
int main()
{
    int length;
    printf("Enter Length of Array:");
    scanf("%d", &length);

    int arr[length];
    printf("Enter Elements of Array:\n");
    for(int i = 0;i<length;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Element of Array:\n");
    for(int j=0;j<length;j++)
    {
        printf("%d",arr[j]);
    }

    int fnd;
    printf("Enter no to Find:");
    scanf("%d", &fnd);

   //linear Search
        /*for(int i=0;i<length;i++)
        {
            if(fnd == arr[i])

                return printf("\nElement %d found at %d Index",fnd,i);

           // return printf("Not Found !");

        }
        */

    //Binary Search
    /*
    int beg = 0;
    int mid = 0;
    int last = length;

        while(beg <= last){

            mid = (beg + last) / 2;
            if(arr[mid] < fnd)
            {
                beg = mid+1;
            }
            else if(arr[mid] > fnd)
            {
                last = mid - 1;
            }
            else
            {
                return printf("Found %d",arr[mid]);

            }
        }
        */

}
