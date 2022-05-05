#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
{
    if (root1 == NULL)
    {
        return NULL;
    }
    if (root2 == NULL)
    {
        return NULL;
    }
    root1->val += root2->val;
    root1->left = mergeTrees(root1->left,root2->left);
    root1->right = mergeTrees(root1->right,root2->right);
    
    return root1;
}

void preorderTraversal(TreeNode * root)
{
    if (root)
    {
        cout<<root->val<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
    
}

int main()
{
    TreeNode *root1 = new TreeNode(10);
    root1->left = new TreeNode(11);
    root1->right = new TreeNode(12);
    root1->left->left = new TreeNode(13);
    root1->left->right = new TreeNode(14);
    TreeNode *root2 = new TreeNode(10);
    root2->left = new TreeNode(11);
    root2->right = new TreeNode(12);
    root2->left->left = new TreeNode(13);
    root2->left->right = new TreeNode(14);
    // preorderTraversal(root1);
    TreeNode *root = mergeTrees(root1,root2);
    preorderTraversal(root);

    return 0;
}