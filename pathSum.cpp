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

bool helper(TreeNode *root, int targetSum, int currSum)
{
    if(root == NULL) return false;
    currSum += root->val;
    if(!root->left && !root->right)
    {
        if(currSum == targetSum)
        {
            return true;
        }
    }
    return helper(root->left,targetSum,currSum) || helper(root->right,targetSum,currSum);
}
bool hasPathSum(TreeNode *root, int targetSum)
{
    if(root == NULL) return false;
    return  helper(root,targetSum,0);
}

int main()
{

    return 0;
}