void display_nodes()
{
    Node *temp = start;
    while(temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
    return;
}