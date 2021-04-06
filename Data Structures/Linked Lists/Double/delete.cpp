void delete_node(int n)
{
    if(start == NULL)
    {
        cout << "The linked list is empty. Returning...";
        return;
    }

    Node *temp = start;
    bool found = false;

    if (n == 1)
    {
        start = temp->next;
        temp->next->prev = NULL;
        free(temp);
    }

    for(int i=1; i<n; ++i)
    {
        if(temp == NULL)
        {
            cout << "Given index is out of range. Returning...";
            return;
        }
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    if(temp->next != NULL)
        temp->next->prev = temp->prev;
    
    free(temp);
    cout << "Node succesfully deleted from the " << n << "th position." << endl;
    return;
}