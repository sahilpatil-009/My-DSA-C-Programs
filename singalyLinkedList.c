//Implementation of Linked list

#include<stdio.h>
#include<stdlib.h>

void insert_at_start();
void insert_at_end();
void insert_at_given_location();
void insert_after_data();

void delete_at_start();
void delete_at_end();
void delete_at_given_location();
void delete_node_with_given_data();

void traversal();
void search_given_data();

int ele;
int count = 0;

struct sll{

    int data;
    struct sll *next;

}*head,*newnode,*temp,*pre;

int main()
{
    int ch;
    do{
        printf("\n1.Insert Data at Start\n");
        printf("2.Insert Data at End\n");
        printf("3.insert_at_given_location\n");
        printf("4.Insertion after data\n");
        printf("5.Travesral(Display)\n");
        printf("..............................\n");
        printf("6.Delete at Start\n");
        printf("7.Delete at End\n");
        printf("8.delete_at_given_location\n");
        printf("9.delete_node_with_given_data\n");
        printf("10.Search_given_data\n");
        printf("11.Exit\n");
        printf("Enter Your Choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1://Insertion at Start
                insert_at_start();
                break;

            case 2://Insert at End
                insert_at_end();
                break;

            case 3://insert_at_given_location
                insert_at_given_location();
                break;

            case 4://inserton after data
                insert_after_data();
                break;

            case 5:traversal();
                break;

            case 6:
                delete_at_start();
                break;

            case 7://delete at end
                delete_at_end();
                break;

            case 8://delete at given location
                delete_at_given_location();
                break;

            case 9:
                delete_node_with_given_data();
                break;
            case 10://search data
                search_given_data();
                break;

            case 11:
                return 0;
                break;

            default :printf("Invalid Input !");

        }
    }while(ch !=11);

}

void insert_at_start()
{
    newnode = (struct sll *)malloc(sizeof(struct sll));

    if(newnode == NULL)
    {
        printf("Memory Not Allociated\n");
        return;
    }

    printf("Enter Data to be Insert:");
    scanf("%d",&newnode->data);
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
        head->next = NULL;

    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}

void insert_at_end()
{
    newnode =(struct sll *)malloc(sizeof(struct sll));
    if(newnode == NULL)
    {
        printf("Memory is Not Allociated");
        return;
    }

    printf("Enter Element to be insert:");
    scanf("%d",&newnode->data);

    if(head == NULL)
    {
        head = newnode;
        head->next = NULL;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->next = NULL;
    }
}

void insert_at_given_location()
{
    newnode = (struct sll *)malloc(sizeof(struct sll));
    if(newnode == NULL)
    {
        printf("Memory not Allocate !");
        return;
    }

    printf("Enter element to be insert:");
    scanf("%d", &newnode->data);

    if(head == NULL)
    {
        head = newnode;
        newnode->next = NULL;
    }
    else
    {
        int x;
        printf("After Which Location insert Data:");
        scanf("%d",&x);

        if(x<count)
        {
            int i=0;
            temp = head;
            while(i<x)
            {
                if(temp->next != NULL)
                {
                    temp = temp->next;
                    i++;
                }
            }

            newnode->next = temp->next;
            temp->next = newnode;
        }
        else
        {
            printf("Invalid Input !\n");
        }
    }
}

void insert_after_data()
{
    newnode = (struct sll *)malloc(sizeof(struct sll));

    if(newnode == NULL)
    {
          printf("Memory not Allocate !");
          return;
    }

    printf("Enter Data to be Insert:");
    scanf("%d",&newnode->data);

    printf("After What data you want to Insert:");
    scanf("%d",&ele);
    temp = head;
    while(temp->data != ele && temp->next != NULL)
    {
        temp = temp->next;
    }
    if(temp->data == ele)
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    else
    {
        printf("Element not Found !");
    }
}

void delete_at_start()
{
    if(head == NULL)
    {
        printf("Lnked list is Empty");
        return;
    }
    if(head->next == NULL)
    {
        printf("%d is delete\n",head->data);
        free(head);
        head = NULL;
        return;
    }
    else
    {
        temp = head;
        head = head->next;
        printf("%d Data is deleted\n", temp->data);
        free(temp);
    }
}

void delete_at_end()
{
    if(head == NULL)
    {
        printf("Linked List is Empty !");
        return;
    }
    if(head->next == NULL)
    {
        printf("%d is deleted",head->data);
        free(head);
        head = NULL;
        return;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            pre = temp;
            temp = temp->next;
        }
        pre->next = NULL;
        printf("%d data is Deleted",temp->data);
        free(temp);
    }
}

void delete_at_given_location()
{
    if(head == NULL)
    {
        printf("Linked list is Empty !");
        return;
    }
    if(head->next == NULL)
    {
        temp = head;
        head = NULL;
        printf("%d is Delete\n",temp->data);
        free(temp);
    }
    else
    {
        int y;
        printf("After Which Location You Want to Delete:");
        scanf("%d", &y);

        int i=1;
        temp = head;
        while(i<y)
        {
            if(temp->next != NULL)
            {
                pre = temp;
                temp = temp->next;
            }
            i++;
        }
        pre->next = temp->next;
        temp->next = NULL;
        printf("%d is Deleted !\n",temp->data);
        free(temp);

    }
}

void delete_node_with_given_data()
{
    struct sll *nextnode;
    if(head==NULL)
    {
        printf("Linked list is Empty !");
        return;
    }
    printf("After Which data you delete data:");
    scanf("%d",&ele);

    if(head->next == NULL)
    {
        printf("Can't Delete Data");
        return;
    }
    else
    {
        temp = head;
        while(temp->data != ele && temp->next != NULL)
        {
            temp = temp->next;
        }
        nextnode = temp->next;
        temp->next = nextnode->next;
        printf("%d is deleted",nextnode->data);
        free(nextnode);
    }
}

void search_given_data()
{
    int x;
    int i=1;
    if(head==NULL)
    {
        printf("Linked list is Empty !");
        return;
    }

    printf("Enter Data TO Search:");
    scanf("%d",&x);

    temp = head;

    while(temp->data != x && temp->next != NULL)
    {
        temp = temp->next;
        i++;
    }

    if(temp->data == x)
    {
        printf("%d is found at %d location",temp->data,i);

    }
    else
    {
        printf("%d is not found !",x);

    }

}

void traversal()
{

    temp = head;
    if(head == NULL)
    {
        
        printf("Linked list is Empty");
    }
    else{

        while(temp != NULL)
        {
            printf("Elemet is%d and its address is %d\n",temp->data,&temp->data);
            printf("\tdata %d \tnext=%d\n",temp->data,temp->next);
            temp = temp->next;
            count++;
        }
    }
}


