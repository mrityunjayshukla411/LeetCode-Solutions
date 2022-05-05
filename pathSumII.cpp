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

// bool hasPathSum(TreeNode *root, int targetSum)
// {
//     if (!root)
//         return false;
//     if (!root->left && !root->right)
//     {
//         if (root->val == targetSum)
//             return true;
//     }
//     bool temp;
//     if (root->left)
//     {
//         temp = hasPathSum(root->left, targetSum - root->val);
//     }
//     if (!temp)
//     {
//         if (root->right)
//         {
//             temp = hasPathSum(root->right, targetSum - root->val);
//         }
//     }

//     return temp;
// }

vector<vector<int>> all;
void allPaths(TreeNode *root, vector<int> &path, int sum ,int targetSum)
{
    if (root)
    {
        sum+= root->val;
        path.push_back(root->val);
        if (!root->left && !root->right && sum == targetSum)
        {
            all.push_back(path);
        }
        allPaths(root->left, path,sum,targetSum);
        allPaths(root->right, path,sum,targetSum);
        path.pop_back();
    }
}

vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    vector<int>path;
    allPaths(root,path,0,targetSum);
    return all;
}

int main()
{
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);
    // allPaths(root);
    vector<vector<int>> res = pathSum(root,22);
    for(auto x : res)
        for(auto y : x)
            cout<<y<<" ";
        cout<<endl;
    return 0;
}