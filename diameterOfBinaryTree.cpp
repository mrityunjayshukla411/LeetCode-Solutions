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

int heightOfTree(TreeNode *root)
{
    if(root == NULL)
    {
        return 0;
    }
    return 1 + max(heightOfTree(root->left),heightOfTree(root->right));
}
int maxDiameter = 0;
int helper(TreeNode *root)
{
    if(root->left && root->right)
    {
        maxDiameter = max(max(maxDiameter,heightOfTree(root->left) + heightOfTree(root->right)),max(helper(root->left),helper(root->right)));
    }
    return maxDiameter;
}

int diameterOfBinaryTree(TreeNode *root)
{
    return helper(root);
}

int main()
{
    return 0;
}