//Implementation of Circular Queue
#include<stdio.h>

int main()
{
    int ch;
    int rear= -1;
    int front= -1;
    int size = 5;
    int cq[size];
    int ele;

    do{
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d", &ch);
        switch(ch)
        {
        case 1://Enqueue
                if(front == rear+1 || rear == size-1)
                {
                    printf("Circular Aueue is Overflow(Queue is Full)\n");
                }
                else if(rear == -1 && front == -1)
                {
                    rear = front = 0;
                    printf("Enter element to Insert:");
                    scanf("%d", &ele);
                    cq[rear] = ele;
                }

                else if(rear == size-1)
                {
                    rear = 0;
                    printf("Enter element to Insert:");
                    scanf("%d", &ele);
                    cq[rear] = ele;
                }
                else
                {
                    printf("Enter element to Insert:");
                    scanf("%d", &ele);
                    rear++;
                    cq[rear] = ele;

                }
            break;

        case 2://Dequeue
            if(front == -1 && rear == -1)
            {
                printf("Circular Queue is Underflow(CQueue is Empty)!");
            }
            else if(front == rear)
            {
                ele = cq[front];
                printf("%d Dequed\b",ele);
                front = -1;
                rear = -1;
            }
            else if(front == size-1)
            {
                ele = cq[front];
                printf("%d Dequed\b",ele);
                front = 0;
            }
            else
            {
                ele = cq[front];
                printf("%d Dequed\n",ele);
                front++;
            }
        break;

        case 3:
            for(int i = front;i<=rear;i++)
            {
                printf("%d\n",cq[i]);
            }
        break;

        case 4:
            return 0;

        default:printf("Invalid Input !\n");

        }
    }while(ch != 5);
}
