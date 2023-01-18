/*Basic operations in array
1.Traversal
2.Insertion
3.Deletion
4.Search
5.update
*/
#include<stdio.h>
int main()
{
    int lenght;
    printf("Enter Length of Array:");
    scanf("%d",&lenght);
    int arr[100];

    printf("Enter Elements in array:\n");
    for(int i=0;i<lenght;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nElements of Array:");
    for(int j=0;j<lenght;j++)
    {
        printf("%d \t",arr[j]);
    }

    /////////////////////
    /*Insert at Specific Position

    int num,pos;
    lenght++;
        printf("Enter data to be insert");
        scanf("%d",&num);
        printf("Enter Position:");
        scanf("%d",&pos);
    int i=0;
    for(i = lenght-1;i>=pos;i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos -1] = num;

    printf("New Elements of array Are:");
    for(int j=0;j<lenght;j++)
    {
        printf("%d\t", arr[j]);
    }

    /*Insertion at Beginning
    lenght++;
    int beg;
        printf("Enter data to be insert at Begining:");
        scanf("%d",&beg);
        for(i = lenght-1;i>=arr[0];i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = beg;

    printf("New Elements of array Are:");
    for(int j=0;j<lenght;j++)
    {
        printf("%d\t", arr[j]);
    }

    /*Insertion at End
    int end;
    lenght++;
        printf("Enter Data to be insert at Ending:");
        scanf("%d", &end);

        arr[lenght] = end;

        printf("New Elements of array Are:");
    for(int j=0;j<lenght;j++)
    {
        printf("%d\t", arr[j]);
    }

    //Deletion

    int dlt;
    int x=0;
    printf("Enter Position Where You Want to delete Data:");
    scanf("%d", &dlt);
    if(dlt>lenght)
    {
        printf("Position Invalid");
    }
    else
    {

        for(x=dlt-1;x<lenght-1;x++)
        {
            arr[x] = arr[x+1];
        }
        lenght--;
        printf("Elements of arra are:\n");
        for(int i=0;i<lenght;i++)
        {
            printf("%d", arr[i]);
        }
    }


    //Update Elemet of array at Given Position
    int uppos,upval;
    printf("\nEnter Position to be Update:");
    scanf("%d", &uppos);
    printf("Enter element:");
    scanf("%d", &upval);

    if(uppos>lenght)
    {
      printf("Invalid Position");
    }
    else{
    for(int i=0;i<lenght;i++)
    {
        if(uppos-1 == i)
        {
            arr[i] = upval;
        }

    }
    printf("\nUpdated Elements of array Are:");
    for(int j=0;j<lenght;j++)
    {
        printf("%d \t", arr[j]);
    }
    }
    */

    //Search Element

    int fnd;
    printf("Enter Element to be Search:");
    scanf("%d", &fnd);

    for(int i=0;i<lenght;i++)
    {
        if(arr[i] == fnd)
        {
            printf("Element %d found at index %d",fnd,i);
        }
        else
        {

            return printf("Element not Found !");
        }
    }
}

