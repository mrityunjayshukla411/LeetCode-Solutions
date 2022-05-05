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

void preOrderTraversal(TreeNode *root, vector<int> &res)
{
    if (root)
    {
        preOrderTraversal(root->left, res);
        res.push_back(root->val);
        preOrderTraversal(root->right, res);
    }
}

int minDepth(TreeNode *root)
{
    if(!root) return 0;
    if (!root->left)
    {
        return minDepth(root->right) +1;
    }
    if (!root->right)
    {
        return minDepth(root->left) +1;
    }
    
    return  min(minDepth(root->left),minDepth(root->right)) + 1;
}

int main()
{
    TreeNode *root1 = new TreeNode(10);
    root1->left = new TreeNode(9);
    root1->right = new TreeNode(11);
    root1->right->right = new TreeNode(12);
    root1->right->right->right = new TreeNode(13);
    // root1->left->left = new TreeNode(13);
    // root1->left->right = new TreeNode(13);
    // root1->right->left = new TreeNode(13);
    // root1->right->right = new TreeNode(13);
    // TreeNode *root2 = new TreeNode(10);
    // root2->left = new TreeNode(11);
    // root2->right = new TreeNode(12);
    // root2->left->left = new TreeNode(13);
    // root2->left->right = new TreeNode(14);
    // preorderTraversal(root1);
    cout<<minDepth(root1)<<endl;
    // preorderTraversal(root);

    return 0;
}