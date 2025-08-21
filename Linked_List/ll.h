#ifndef LL_H
#define LL_H

struct node {
    int data;
    struct node* next;
};

int int_input(char*);
struct node* Create_Linked_List(void);
void Add_Node(struct node*);
void Del_Node(struct node**);
void Display(struct node*);

#endif
