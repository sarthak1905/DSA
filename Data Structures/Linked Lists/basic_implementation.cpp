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

void insert_node(Node *np)
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

void display_nodes(Node *np)
{
    cout << "\nThe linked list is now:\n"
    while(np!= NULL)
    {
        cout << np->data << "->";
        np = np->next;
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
    insert_node(newptr);
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
            insert_node(newptr);
            cout << "Node successfully added!\n";
        }
        else if (ch == 2)
            display_nodes(start);
        else
            break;
    }
    return 0;
}