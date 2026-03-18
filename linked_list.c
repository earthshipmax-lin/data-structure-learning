#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// 创建节点
Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

void printList(Node* head)
{
    Node* temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

void insertNode(Node* node, int data)
{
    if (node == NULL) return;

    Node* newNode = createNode(data);

    newNode->next = node->next; // 将新节点的next指针指向原节点的next指针指向的节点
    node->next = newNode; // 将原节点的next指针指向新节点
}

void insertAfter(Node* node, int data)
{
    if (node == NULL) return;

    Node* newNode = createNode(data);

    newNode->next = node->next;
    node->next = newNode; // 将原节点的next指针指向新节点
}