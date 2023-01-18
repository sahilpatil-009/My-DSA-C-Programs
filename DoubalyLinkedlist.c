//Implementation of Doubaly Linked list

#include<stdio.h>
#include<stdlib.h>

void creat_ddl();
void inser_at_start();
void insert_at_end();
void inserti_at_location();
void insert_after_data();

void delete_at_start();
void delete_at_end();
void delete_at_given_location();
void delete_node_with_given_data();

void search_given_data();
void traversal();

int ele;
int count = 0;

struct ddl{

    int data;
    struct ddl *next;
    struct ddl *prev;

}*head,*newnode,*temp,*pre;

int main()
{
    int ch;
    do
    {
        printf("\n1.Create DLL\n");
        printf("2.Insert at start\n");
        printf("3.Insert at End\n");
        printf("4.inserti_at_location \n");
        printf("5.insert_after_data\n");
        printf("6.delete_at_start\n");
        printf("7.delete_at_end\n");
        printf("8.delete_at_given_location\n");
        printf("9.delete_node_with_given_data\n");
        printf("10.Display\n");
        printf("11.Search_given_data\n");
        printf("12.Exit\n");
        printf("Enter Choice:");
        scanf("%d",&ch);

    switch(ch)
    {
        case 1:
            creat_ddl();
            break;

        case 2:
            inser_at_start();
            break;

        case 3:
            insert_at_end();
            break;

        case 4:
            inserti_at_location();
            break;
        case 5:
            insert_after_data();
            break;
        case 6:
            delete_at_start();
            break;
        case 7:
            delete_at_end();
            break;
        case 8:
            delete_at_given_location();
            break;
        case 9:
            delete_node_with_given_data();
            break;
        case 10:
            traversal();
            break;

        case 11:
            search_given_data();
            break;

        case 12:
            return 0;
        }

    }while(ch != 12);
}

void creat_ddl()
{
    newnode = (struct ddl *)malloc(sizeof(struct ddl));
    if(newnode == NULL)
    {
        printf("Memory not allocate");
        return;
    }

    printf("Enter Element to Be insert:");
    scanf("%d",&newnode->data);

    if(head == NULL)
    {
        head = newnode;
        head->next = NULL;
        head->prev = NULL;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = NULL;
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
            printf("\nElemets of DDL Are:%d and Its Address is=%d\n" ,temp->data,&temp->data);
            temp = temp->next;
            count++;
        }
    }
        temp = head;
        while(temp != NULL)
        {
            printf("|prev=%d|data=%d|next=%d|\n",temp->prev,temp->data,temp->next);
            temp = temp->next;
        }

}

void inser_at_start()
{
    newnode = (struct ddl *)malloc(sizeof(struct ddl));

    if(newnode == NULL)
    {
        printf("Memory not allocate:");
        return;
    }
    printf("Enter data to be insert:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if(head==NULL)
    {
        head = newnode;
        head->next = NULL;
        head->prev = NULL;
    }
    else
    {
        newnode->next = head;
        head = newnode;
        head->prev = NULL;
    }
}

void insert_at_end()
{
    newnode  = (struct ddl *)malloc(sizeof(struct ddl));
    if(newnode == NULL)
    {
        printf("Memory not allocate !");
        return;
    }

    printf("Enter Element to be insert at End:");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(head == NULL)
    {
        head = newnode;
        newnode->next = NULL;
        newnode->prev = NULL;
    }
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = NULL;

    }
}

void inserti_at_location()
{
    newnode = (struct ddl *)malloc(sizeof(struct ddl));

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
        newnode->prev = NULL;
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
            newnode->prev = temp;
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
    newnode = (struct ddl *)malloc(sizeof(struct ddl));

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
        newnode->prev = temp;
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
        head->prev = NULL;
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
    struct ddl *nexttonext;
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
        nexttonext = temp->next;
        nexttonext->prev = pre;
       // temp->next->prev = pre;
        temp->next = NULL;
        temp->prev = NULL;
        printf("%d is Deleted !\n",temp->data);
        free(temp);

    }
}

void delete_node_with_given_data()
{
    int y;
    struct ddl *nextnode,*nexttonext;
    if(head==NULL)
    {
        printf("Linked list is Empty !");
        return;
    }
    printf("After Which data you delete data:");
    scanf("%d",&y);

    if(head->next == NULL)
    {
        printf("Can't Delete Data");
        return;
    }
    else
    {
        temp = head;
        while(temp->data != y && temp->next != NULL)
        {
            temp = temp->next;
        }
        nextnode = temp->next;
        nexttonext = nextnode->next;

        temp->next = nextnode->next;
        nexttonext->prev = temp;

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


