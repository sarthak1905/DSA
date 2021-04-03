void insert_node(int data)
{
    Node *temp = new Node;
    if (start->next == NULL)
    {
        temp->data = data;
        temp->prev = NULL;
        temp->next = NULL;
        start->next = temp;
    }
    else
    {
        temp  = start;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        Node *new_node = new Node;
        new_node->data = data;
        new_node->prev = temp;
        new_node->next = NULL;
        temp->next = new_node;
    }
    return;
}