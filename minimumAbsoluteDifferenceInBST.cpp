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
TreeNode *previ = NULL;
int ans = INT_MAX;
void dfs(TreeNode *root)
{
    if (!root)
        return;
    if (root->left)
        dfs(root->left);
    if (previ)
        ans = min(ans, abs(previ->val - root->val));
    previ = root;
    if (root->right)
        dfs(root->right);
}

int getMinimumDifference(TreeNode *root)
{
    dfs(root);
    return ans;
}
int main()
{

    return 0;
}