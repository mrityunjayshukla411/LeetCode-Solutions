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

bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (!p && !q) return true;
    if (!p || !q) return false;
    if (p->val != q->val) return false;

    return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);

}

int main()
{
    TreeNode *root1 = new TreeNode(10);
    root1->left = new TreeNode(11);
    root1->right = new TreeNode(12);
    // root1->left->left = new TreeNode(13);
    // root1->left->right = new TreeNode(14);
    TreeNode *root2 = new TreeNode(10);
    root2->left = new TreeNode(11);
    root2->right = new TreeNode(12);
    // root2->left->left = new TreeNode(13);
    // root2->left->right = new TreeNode(14);
    // preorderTraversal(root1);
    if (isSameTree(root1, root2))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    // preorderTraversal(root);

    return 0;
}