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