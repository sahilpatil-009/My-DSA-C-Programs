//Implementation of stack

#include<stdio.h>

//void push(int arr[], int top,int size);
int main()
{
    int size = 5;
    int arr[size];
    int top = -1;
    int ele;
    int ch;
    do
    {
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter Choice:");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1://push
           // push(arr,top,size);
            if(top == size-1)
            {
             printf("Stack Overflow !\n");
            }
            else
            {
                top = top+1;
                printf("Enter No. to Push:");
                scanf("%d", &ele);
                arr[top] = ele;
                printf("Element %d Push Succesfullty\n",ele);
            }
        break;
        case 2://pop
            if(top == -1)
            {
                printf("Stack is Underflow !\n");
            }
            else
            {
                printf("%d element Poped Succesfully !",arr[top]);
                top = top-1;
            }
        break;
        case 3://display
            if(top == -1)
            {
                printf("Stack is Empty !\n");
            }
            else
            {
                for(int i=0;i<=top;i++)
                {
                    printf("%d\t",arr[i]);
                }
                printf("\n");
            }
        break;
        case 4:
            return 0;
        }
    }while(ch !=4);
}
/*
void push(int arr[], int top,int size)
{
    int ele;
     if(top == size-1)
            {
             printf("Stack Overflow !\n");
            }
            else
            {
                printf("Enter No. to Push:");
                scanf("%d", &ele);
                top = top+1;
                arr[top] = ele;
                printf("Element %d Push Succesfullty\n",ele);
            }
}
*/
