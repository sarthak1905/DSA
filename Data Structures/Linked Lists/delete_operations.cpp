void delete_first_node()
{
    if(start == NULL)
        cout << "The linked list is empty. Returning...";
    
    else{
        Node* temp = new Node();
        temp = start;
        start = temp->next;
        free(temp);
        cout << "Successfully deleted first node!";
    }
    return;
}

void delete_nth_node(int n)
{
    if(start == NULL)
        cout << "The linked list is empty. Returning...";

    else{
        Node* temp1 = new Node();
        temp1 = start; 
        bool flag = true;
        for(int i=0; i < n-2; ++i){
            flag = false;
            temp1 = temp1->next;
            if (temp1 == NULL){
                cout << "The index given is out of range. Returning...";
                return;
            }
        }
        if(flag){
            cout << "The index given is out of range. Returning...";
            return;
        }
        Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
        cout << "Node deleted from the " << n <<"th position successfully.";
    }
    return;
}

void delete_last_node()
{
    Node* temp1 = start;
    while(temp1->next->next != NULL)
        temp1 = temp1->next;
    Node* temp2 = temp1->next;
    temp1->next = NULL;
    free(temp2);
    cout << "Successfully deleted last node!";
    return;
}