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

void recursive_print(Node *np)
{
    if(np == NULL)
    {
        cout << endl;
        return;
    }
    cout << np->data << "->";
    recursive_print(np->next);
}

void recursive_print_reverse(Node *np)
{
    if(np==NULL)
    {
        cout << endl;
        return;
    }
    recursive_print_reverse(np->next);
    cout << np->data << "->";
}