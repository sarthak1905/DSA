#include "all_operations.cpp"

int main()
{
    start = NULL;
    while(true)
    {
        int option;
        cout << "1.Insert\n2.Display\n3.Delete from nth position\n4.Exit\nYour choice:";
        cin >> option;
        switch(option)
        {
            case 1: cout << "\nEnter data for the node:";
                int data;
                cin >> data;
                insert_node(data);
                break;
            
            case 2:display_nodes();
                    break;
            
            case 3: cout << "Enter the position of the node you wish to delete:";
                int n;
                cin >> n;
                delete_node(n);
                break;

            default: return 0;
            }
    }
    return 0;
}