//function With Argument
#include<stdio.h>

void add(int x,int y);
int main()
{
    int a,b;
    printf("Enter Two Number to Add:");
    scanf("%d%d",&a,&b);
    add(a,b);
}

void add(int x,int y)
{
    int sum;
    sum = x+y;
    printf("Addition is:%d",sum);
}



/*
#include<stdio.h>

void linearSearch(int a[], int size);
void binarySearch(int a[], int size);

int main()
{
    int length;
    int i,j;
    printf("Enter Size of ARRAy:");
    scanf("%d",&length);

    int a[length];

    printf("Enter Elements of Array:");
    for(i=0;i<length;i++)
    {
        scanf("%d\n",&a[i]);
    }
     printf("Elements of Array:");
    for(j=0;j<length;j++)
    {
        printf("%d\t", a[j]);
    }

    linearSearch(a,length);
    binarySearch(a,length);



   /* while(1)
    {
        printf("\n1.Linear Search\n");
        printf("2.Binary Search\n");
        printf("3.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            linearSearch(arr,length,fnd);
            break;

        case 2:
            binarySearch(arr,length,fnd);
            break;

        case 3:
            return 0;
            break;

        default:printf("Invalid Input !\n");
        }
    }
}

void linearSearch(int a[], int size)
{
    int fnd = 1;
    int cout=0;
    for(int i=0;i<size;i++)
        {
            if(fnd == a[i])

                printf("\nElement %d found at %d Index",fnd,i);
                cout++;

           // return printf("Not Found !");
           //if(cout == size)
          // {
            //   printf("\nNot Found !");
           //}

        }
}

void binarySearch(int a[], int size)
{
    int beg = 0;
    int mid = 0;
    int last = size;
    int fnd=1;

        while(beg <= last){

            mid = (beg + last) / 2;
            if(a[mid] < fnd)
            {
                beg = mid+1;
            }
            else if(a[mid] > fnd)
            {
                last = mid - 1;
            }
            else
            {
                printf("Found %d",a[mid]);
                return;
            }

        }
}
*/

