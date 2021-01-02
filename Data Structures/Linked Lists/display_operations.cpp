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
