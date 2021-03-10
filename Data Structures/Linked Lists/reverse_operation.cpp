void reverse_list()
{
    Node * d_node = start;
    Node * next_node = d_node->next;
    d_node->next = NULL;
    Node * prev_node = d_node;
    while(next_node != NULL)
    {
        d_node = next_node;
        Node * temp = d_node->next;
        d_node->next = prev_node;
        prev_node = d_node;
        next_node = temp;
    }
    start = d_node;
    return;
}