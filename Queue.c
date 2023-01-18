//Implementation of Queue
#include<stdio.h>
int main()
{
    int size = 5;
    int arr[size];
    int rear = -1;
    int front = -1;
    int ele;
    int ch;
    do
    {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        
        printf("Enter Choice:");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1://Enqueue
            if(rear == size-1)
            {
                printf("Stack is Overflow!");
            }
            else
            {
                rear = rear+1;
                printf("Enter Element to be Enqueue:");
                scanf("%d",&ele);
                arr[rear] = ele;
                printf("%d element Enqueue Succesfully !\n",ele);
            }

        break;

        case 2://Dequeue
            if(front == rear)
            {
                printf("Queue is Underflow !");
            }
            else
            {
                front = front+1;
                printf("%d element Dequeue Succesfully !\n",arr[front]);

            }

        break;
        case 3://display
            if(front == rear)
            {
                printf("Queue is Empty !\n");
            }
            else
            {
                for(int i=front+1;i<=rear;i++)
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
