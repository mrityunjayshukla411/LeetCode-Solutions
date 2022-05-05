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

bool isIdentical(TreeNode *root, TreeNode* subRoot)
{
    if(root->val == subRoot->val)
    {
        if(isIdentical(root->left,subRoot->left) && isIdentical(root->right,subRoot->right))
        {
            return true;
        }
    }
    if(isIdentical(root->left,subRoot)) return true;
    return isIdentical(root->right,subRoot);
}

bool isSubtree(TreeNode *root, TreeNode *subRoot)
{
    return isIdentical(root,subRoot);
}

int main()
{

    return 0;
}