#include <stdio.h>
#include "linked_list.h"

int main()
{
    Node* head = NULL;
    head = createNode(10);

    Node* temp = head;

    temp->next = createNode(20);
    temp = temp->next;

    temp->next = createNode(30);
    temp = temp->next;

    temp->next = createNode(40);

    printList(head);

    return 0;
}