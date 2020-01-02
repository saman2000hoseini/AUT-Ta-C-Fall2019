#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node * newNode(int data)
{
    struct Node * new_Node = (struct Node *) malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void addFront(struct Node ** head,int data)
{
    struct Node * new_node = newNode(data);
    new_node->next = *head;
    *head = new_node;
}

void pushBack(struct Node ** head , int data)
{
    if(*head == NULL)
    {
        *head = newNode(data);
        return;
    }
    struct Node * curr = *head;
    while(curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode(data);
}
void deleteNode(struct Node ** head,int data)
{
    if(*head==NULL){
        return;
    }
    if((*head)->data==data){
        struct Node* temp=*head;
        *head=(*head)->next;
        free(temp);
        return;
    }
    struct Node* current=*head;
    struct Node* last = NULL;
    while(current!=NULL)
    {
        if (current->data == data)
        {
            last->next = current->next;
            free(current);
            return;
        }
        last = current;
        current = current->next;
    }
}

void printNodes(struct Node * head)
{
    struct Node * curr = head;
    while (curr!=NULL)
    {
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("\n");
}

int main()
{
    struct Node * head = NULL;
    /*addFront(&head,1);
    addFront(&head,2);
    addFront(&head,3);
    addFront(&head,4);*/
    pushBack(&head,1);
    pushBack(&head,2);
    pushBack(&head,3);
    pushBack(&head,4);
    pushBack(&head,5);
    printNodes(head);
    deleteNode(&head,1);
    printNodes(head);
    deleteNode(&head,3);
    printNodes(head);
    return 0;
}
