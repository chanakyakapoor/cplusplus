#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        Node* next;
        int data;
};

void append(Node **head_ref, int new_data)
{
    Node *new_node = new Node();

    Node *last = *head_ref;

    new_node->data = new_data;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_node;
    return;
}
int main(){

    Node* head = NULL;

    append(&head, 1);
    append(&head, 2);
    append(&head, 3);
    append(&head, 4);
    append(&head, 5);
    append(&head, 6);
    append(&head, 7);
    append(&head, 8);
    append(&head, 9);
}