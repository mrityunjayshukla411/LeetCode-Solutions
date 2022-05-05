#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void helper(TreeNode *root)
{
    if (root == NULL)
        return;
    else if (root->left && root->right)
    {
        TreeNode *temp = root->left;
        root->left = root->right;
        root->right = temp;
        helper(root->right);
        helper(root->left);
    }
    else if (root->left == NULL)
    {
        helper(root->right);

        root->left = root->right;
        root->right = NULL;
    }
    else if (root->right == NULL)
    {
        helper(root->left);

        root->right = root->left;
        root->left = NULL;
    }
}
TreeNode *invertTree(TreeNode *root)
{
    helper(root);
    return root;
}

int main()
{

    return 0;
}