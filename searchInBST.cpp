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

TreeNode *searchBST(TreeNode *root, int val)
{
    if (root)
    {

        if (root->val == val)
            return root;
        else if (root->val > val)
            return searchBST(root->left, val);
        else
            return searchBST(root->right, val);
    }
    return NULL;
}
int main()
{

    return 0;
}