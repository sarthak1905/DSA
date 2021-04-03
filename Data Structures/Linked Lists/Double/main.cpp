#include "all_operations.cpp"

int main()
{
    start = NULL;
    while(true)
    {
        int option;
        cout << "1.Insert\n2.Display\n3.Exit\nYour choice:";
        cin >> option;
        if(option == 1)
        {
            cout << "\nEnter data for the node:";
            int data;
            cin >> data;
            insert_node(data);
        }
        
        else if(option == 2)
        {
            display_nodes();
        }
        
        else
            return 0;
    }
    return 0;
}