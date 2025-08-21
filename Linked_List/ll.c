#include <stdio.h>
#include <malloc.h>

struct node {
    int data;
    struct node* next;
};

int int_input(char* prompt)
{
    int x = 0;
    printf("%s", prompt);
    scanf("%d", &x);
    return x;
}

struct node* Create_Linked_List(void)
{
    struct node* Head = (struct node*) malloc(sizeof(struct node));
    Head->data = int_input("Enter numeric data for Head Node of new Linked List: ");
    Head->next = NULL;
    return Head;
}

void Add_Node(struct node* Head)
{
    int Key = int_input("Enter the value of Node after which new node is to be inserted: ");

    struct node* temp = Head;
    while(temp != NULL)
    {
        if(temp->data == Key)
            break;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("No Such Nodes Found!\n");
        return;
    }

    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data = int_input("Enter numeric data for new node: ");
    new_node->next = NULL;
    temp->next = new_node;
    printf("New Node Added!\n");
}

void Del_Node(struct node** Head)
{
    int Key = int_input("Enter the value of Node to be deleted: ");
    struct node* temp = *Head;
    struct node* prev = NULL;


    while(temp!= NULL)
    {
        if(temp->data == Key)
            break;
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("No Such Nodes Found!\n");
        return;
    }


    if(temp == *Head)
    {
        *Head = (*Head)->next;
    } else {
        prev->next = temp->next;
    }
    free(temp);
    printf("Node Deleted!\n");
}

void Display(struct node* Head)
{
    struct node* temp = Head;
    printf("[LINKED LIST]\n");
    while(temp != NULL)
    {
        printf("[ %d ]", temp->data);
        if(temp->next != NULL)
            printf(" --> ");
        temp = temp->next;
    }
    printf("\n[LINKED LIST]\n");
}
