#include "all_operations.cpp"

int main()
{
    start = NULL;
    int data;
    cout << "Enter data for 1st node:";
    cin >> data;
    Node* ptr = create_node(data);
    insert_node_beg(ptr);
    while(true)
    {
        int ch;
        cout << "\n1.Insert\n2.Display\n3.Delete\n4.Exit\nEnter your choice:";
        cin >> ch;
        if (ch == 1)
        {
            cout << "Enter data:";
            cin >> data;
            Node* ptr = create_node(data);
            int option;
            cout << "1.Insert in the beginninng\n2.Insert at nth position\n3.Insert at end\nEnter your choice:";
            cin >> option;
            if (option == 1)
                insert_node_beg(ptr);
            else if(option == 2)
            {
                int n;
                cout << "Enter value of n:";
                cin >> n;
                insert_node_nth(ptr, n);
            }
            else
                insert_node_end(ptr);
            cout << "Node successfully added!\n";
        }
        else if (ch == 2)
            display_nodes(start);
        else if(ch == 3)
        {
            cout << "Which node would you like to delete?\n1.First\n2.Nth Position\n3.Last Position\nEnter your choice:";
            int option;
            cin >> option;
            if(option == 1)
                delete_first_node();
            else if(option == 2){
                cout << "Enter the position you want to delete:";
                int n;
                cin >> n;
                delete_nth_node(n);
            }
            else if(option == 3)
                delete_last_node();
        }
        else
            break;
    }
    return 0;
}