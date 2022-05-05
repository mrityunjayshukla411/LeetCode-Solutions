#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void preOrderTraversal(TreeNode *root, vector<TreeNode *> &v)
{
    if (root)
    {
        v.push_back(root);
        preOrderTraversal(root->left, v);
        preOrderTraversal(root->right, v);
    }
}
void postOrderTraversal(TreeNode *root, vector<TreeNode *> &v)
{
    if (root)
    {
        v.push_back(root);
        postOrderTraversal(root->left, v);
        postOrderTraversal(root->right, v);
    }
}

void inorderTraversal(TreeNode *root)
{
    if (root)
    {
        inorderTraversal(root->left);
        cout << root->val << endl;
        inorderTraversal(root->right);
    }
}

void reversal(TreeNode *root)
{
    if (root)
    {
        if (root->left && root->right)
        {
            swap(root->left, root->right);
        }
        else if (root->left && !root->right)
        {
            root->right = root->left;
            root->left = NULL;
        }
        else if (!root->left && root->right)
        {
            root->left = root->right;
            root->right = NULL;
        }
        
        
        reversal(root->left);
        reversal(root->right);
    }
}

bool flipEquiv(TreeNode *root1, TreeNode *root2)
{
   reversal(root1);
   inorderTraversal(root1);
   inorderTraversal(root2);
    return false;
}

int main()
{

    return 0;
}