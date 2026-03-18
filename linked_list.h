#ifndef LINK_LIST_H
#define LINK_LIST_H

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void printList(Node* head);

#endif