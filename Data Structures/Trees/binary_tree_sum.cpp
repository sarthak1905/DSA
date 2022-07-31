#include<bits/stdc++.h>

using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int val, Node* left=NULL, Node* right=NULL)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int tree_sum(Node*root)
{
    if(root == NULL) return 0;
    return root->val + tree_sum(root->left) + tree_sum(root->right);
}

int main()
{
    Node f = Node(4);
    Node e = Node(2);
    Node d = Node(18, &e, &f);
    Node c = Node(12);
    Node b = Node(43, &d);
    Node a = Node(10, &b, &c);

    cout << tree_sum(&a);
    return 0;
}