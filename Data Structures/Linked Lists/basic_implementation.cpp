#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
}*start, *newptr, *temp, *ptr;

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

void insert_node_end(Node *np)
{
    if (start == NULL)
        start = np;
    else
    {
        temp = new Node;
        temp = start;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = np;
    }
    return;
}

void display_nodes(Node *np)
{
    cout << "\nThe linked list is now:\n";
    while(true)
    {
        cout << np->data << "->";
        np = np->next;
        if (np == NULL)
            break;
    }
    cout << endl;
    return;
}

int main()
{
    start = NULL;
    int data;
    cout << "Enter data for 1st node:";
    cin >> data;
    newptr = create_node(data);
    insert_node_beg(newptr);
    while(true)
    {
        int ch;
        cout << "\n1.Insert\n2.Display\n3.Exit\nEnter your choice:";
        cin >> ch;
        if (ch == 1)
        {
            cout << "Enter data:";
            cin >> data;
            newptr = create_node(data);
            int option;
            cout << "Press 1 to insert at the start or 2 to insert at the end:";
            cin >> option;
            if (option == 1)
                insert_node_beg(newptr);
            else
                insert_node_end(newptr);
            cout << "Node successfully added!\n";
        }
        else if (ch == 2)
            display_nodes(start);
        else
            break;
    }
    return 0;
}