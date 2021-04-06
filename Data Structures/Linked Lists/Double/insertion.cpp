void insert_node(int data, int n)
{
    Node *temp = new Node;
    if (start == NULL)
    {
        cout << "The linked list is empty. Inserting the node at the beginning...";
        temp->data = data;
        temp->prev = NULL;
        temp->next = NULL;
        start = temp;
        cout << "\nNode successfully inserted at the beginning.\n";
        return;
    }

    Node *new_node = new Node;
    temp = start;
    for(int i=1; i<n-1; ++i)
    {
        if(temp->next == NULL)
        {
            cout << "Given index is out of range. Inserting element at the last position...";
            new_node->data = data;
            new_node->prev = temp;
            new_node->next = NULL;
            temp->next = new_node;
            cout << "\nNode successfully inserted at the last postion.\n";
            return;
        }
        temp = temp->next;
    }
    new_node->data = data;
    new_node->prev = temp;
    new_node->next = temp->next;
    temp->next = new_node;
    cout << "Node successfully inserted at the " << n << "th position.\n";

    return;
}