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

// Height of the Binary Tree
int height(Node *root)
{
    if (root == NULL) return 0;
    int leftHt = height(root->left);
    int rightHt = height(root->right);
    return max(leftHt , rightHt) + 1;
}

int main ()
{
    vector <int> preorder = {1 , 2 , -1 , -1 , 3 , 4, -1 , -1 , 5, -1 , -1};

    Node *root = buildTree(preorder);
    cout << "Height of the tree : " << height(root) << endl;
    return 0;
}
