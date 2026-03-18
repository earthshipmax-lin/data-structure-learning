#ifndef LINK_LIST_H
#define LINK_LIST_H

typedef struct Node
{
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void printList(Node* head);
void insertNode(Node* node, int data);
void insertAfter(Node* node, int data);

#endif