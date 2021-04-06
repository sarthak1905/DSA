void delte_node(int n)
{
    if(start == NULL)
    {
        cout << "The linked list is empty. Returning...";
        return;
    }

    Node *temp = start;
    bool found = false;

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
    temp->next->prev = temp->prev;
    free(temp);
    cout << "Node succesfully deleted from the " << n << "th position." << endl;
    return;
}