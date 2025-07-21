#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int a)
    {
        data = a;
        left = right = NULL;
    }
};
static int idx = -1;
Node* buildTree(vector <int> preorder)
{
    idx++;
    if (preorder[idx] == -1)
    {
        return NULL;
    }
    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

// Count nodes of the Binary Tree
int sumNodes(Node *root)
{
    if (root == NULL) return 0;
    int leftHt = sumNodes(root->left);
    int rightHt = sumNodes(root->right);
    return leftHt + rightHt + root->data;
}

int main ()
{
    vector <int> preorder = {1 , 2 , -1 , -1 , 3 , 4, -1 , -1 , 5, -1 , -1};

    Node *root = buildTree(preorder);
    cout << "Sum of Nodes of the tree : " << sumNodes(root) << endl;
    return 0;
}
