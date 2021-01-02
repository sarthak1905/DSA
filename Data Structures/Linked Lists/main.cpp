#include "all_operations.cpp"

int main()
{
    start = NULL;
    int data;
    cout << "Enter data for 1st node:";
    cin >> data;
    newptr = create_node(data);
    insert_node_beg(newptr);
    while(true)
    {
        int ch;
        cout << "\n1.Insert\n2.Display\n3.Exit\nEnter your choice:";
        cin >> ch;
        if (ch == 1)
        {
            cout << "Enter data:";
            cin >> data;
            newptr = create_node(data);
            int option;
            cout << "1.Insert in the beginninng\n2.Insert at nth position\n3.Insert at end\nEnter your choice:";
            cin >> option;
            if (option == 1)
                insert_node_beg(newptr);
            else if(option == 2)
            {
                int n;
                cout << "Enter value of n:";
                cin >> n;
                insert_node_nth(newptr, n);
            }
            else
                insert_node_end(newptr);
            cout << "Node successfully added!\n";
        }
        else if (ch == 2)
            display_nodes(start);
        else
            break;
    }
    return 0;
}