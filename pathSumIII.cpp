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

// vector<vector<int>> all;
int total = 0;
void findPathSum(TreeNode *curr, int sum, int target, unordered_map<int, int> hm)
{
    if (curr == NULL)
        return;

    sum += curr->val;
    if (hm.find(sum - target) != hm.end())
        total += hm[sum - target];
    if (hm.find(sum) != hm.end())
    {
        hm[sum]++;
    }
    if (hm.find(sum) == hm.end())
    {
        hm[sum] = 0;
    }

    findPathSum(curr->left, sum, target, hm);
    findPathSum(curr->right, sum, target, hm);
    hm[sum]--;
    return;
}

int pathSum(TreeNode *root, int targetSum)
{
    if (root == NULL)
    {
        return 0;
    }
    unordered_map<int, int> m;
    m[0] = 1;
    findPathSum(root, 0, targetSum, m);
    return total;
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
    cout << pathSum(root, 22) << endl;
    return 0;
}