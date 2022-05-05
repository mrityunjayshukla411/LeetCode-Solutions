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

void inorderTraversal(TreeNode *root)
{
    if (root)
    {
        inorderTraversal(root->left);
        cout << root->val << " ";
        inorderTraversal(root->right);
    }
}

TreeNode *build(vector<int> &preorder, int &i, int bound)
{
    if (i == preorder.size() || preorder[i] > bound)
    {
        return NULL;
    }
    TreeNode *root = new TreeNode(preorder[i++]);
    root->left = build(preorder, i, root->val);
    root->right = build(preorder, i, bound);
    return root;
}
TreeNode *bstFromPreorder(vector<int> &preorder)
{
    int i = 0;
    return build(preorder, i, INT_MAX);
}
int main()
{
    vector<int> v = {8, 5, 1, 7, 10, 12};
    TreeNode *root = bstFromPreorder(v);
    inorderTraversal(root);
    return 0;
}