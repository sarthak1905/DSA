void display_nodes()
{
    Node *temp = start;
    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
    return;
}