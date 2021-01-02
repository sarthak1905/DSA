#include "node_struct.cpp"

Node * create_node(int data)
{
    ptr = new Node;
    ptr->data = data;
    ptr->next = NULL;
    return ptr;
}

void insert_node_beg(Node *np)
{
    if(start == NULL)
        start = np;
    else
    {
        temp = start;
        start = np;
        np->next = temp;
    }
    return;
}

void insert_node_nth(Node *np, int n)
{
    cout << "\nValue of n:" << n;
    if(start == NULL)
        start = np;
    else
    {
        Node *save;
        temp = start;
        for(int i = 1; i < n - 1; ++i)
            temp = temp->next;
        save = temp->next;
        temp->next = np;
        np->next = save; 
    }
    return;
}

void insert_node_end(Node *np)
{
    if (start == NULL)
        start = np;
    else
    {
        temp = start;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = np;
    }
    return;
}
