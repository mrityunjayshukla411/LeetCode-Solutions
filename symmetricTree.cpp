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

bool isMirror(TreeNode *l, TreeNode *r)
{
    if (!l && !r)
    {
        return true;
    }
    if (!l || !r)
    {
        return false;
    }

    return l->val == r->val && isMirror(l->left,r->right) && isMirror(l->right,r->left);
    
}

bool isSymmetric(TreeNode *root)
{
    return isMirror(root->left, root->right);
}

int main()
{
    TreeNode *root1 = new TreeNode(10);
    root1->left = new TreeNode(11);
    root1->right = new TreeNode(11);
    // root1->left->left = new TreeNode(13);
    root1->left->right = new TreeNode(13);
    root1->right->left = new TreeNode(13);
    // root1->right->right = new TreeNode(13);
    // TreeNode *root2 = new TreeNode(10);
    // root2->left = new TreeNode(11);
    // root2->right = new TreeNode(12);
    // root2->left->left = new TreeNode(13);
    // root2->left->right = new TreeNode(14);
    // preorderTraversal(root1);
    if (isSymmetric(root1))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    // preorderTraversal(root);

    return 0;
}