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

void solve(TreeNode *root, int d, int &d1, int &s1)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        if (d > d1)
            d1 = d, s1 = root->val;
        else if (d == d1)
            s1 += root->val;
        return;
    }
    solve(root->left, d + 1, d1, s1);
    solve(root->right, d + 1, d1, s1);
}
int deepestLeavesSum(TreeNode *root)
{
    int s1 = 0, d1 = 0;
    solve(root, 0, d1, s1);
    return s1;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->left->left = new TreeNode(7);
    root->right->right = new TreeNode(6);
    root->right->right->right = new TreeNode(8);
    cout << deepestLeavesSum(root) << endl;

    return 0;
}