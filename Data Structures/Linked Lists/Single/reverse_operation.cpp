void reverse_list()
{
    Node * d_node = start;
    Node * next_node = d_node->next;
    d_node->next = NULL;
    Node * prev_node = d_node;
    while(next_node != NULL)
    {
        d_node = next_node;
        next_node = d_node->next;
        d_node->next = prev_node;
        prev_node = d_node;
    }
    start = d_node;
    return;
}

void reverse_list_rec(Node *np)
{
    if(np->next == NULL)
    {
        start = np;
        return;
    }
    reverse_list_rec(np->next);
    Node *next_node = np->next;
    next_node->next = np;
    np->next = NULL;
}