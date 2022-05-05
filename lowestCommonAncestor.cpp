#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
{
    if (!root)
    {
        return nullptr;
    }

    if (root->val == p->val || root->val == q->val)
    {
        return root;
    }

    TreeNode *leftCommon = lowestCommonAncestor(root->left, p, q);
    TreeNode *rightCommon = lowestCommonAncestor(root->right, p, q);

    if (leftCommon == nullptr && rightCommon == nullptr)
    {
        return nullptr;
    }
    if (leftCommon != nullptr && rightCommon != nullptr)
    {
        return root;
    }
    return leftCommon != nullptr ? leftCommon : rightCommon;
}

int main()
{
    TreeNode *root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    TreeNode *p = root->left->right->right;
    TreeNode *q = root->left->right;
    TreeNode *ans = lowestCommonAncestor(root, p, q);
    cout << ans->val << endl;
    return 0;
}