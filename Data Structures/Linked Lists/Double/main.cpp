#include "all_operations.cpp"

int main()
{
    start = NULL;
    while(true)
    {
        int option, n;
        cout << "1.Insert\n2.Display\n3.Delete from nth position\n4.Exit\nYour choice:";
        cin >> option;
        switch(option)
        {
            case 1: cout << "\nEnter data for the node:";
                int data;
                cin >> data;
                cout << "Enter the position you wish to insert the node:";
                cin >> n;
                insert_node(data, n);
                break;
            
            case 2:display_nodes();
                    break;
            
            case 3: cout << "Enter the position of the node you wish to delete:";
                cin >> n;
                delete_node(n);
                break;

            default: return 0;
            }
    }
    return 0;
}