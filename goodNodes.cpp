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

void dfs(TreeNode *head, int *cnt , int maxVal)
{
    if (head)
    {
        maxVal = max(maxVal,head->val);
        if (head->left)
        {
            if (head->left->val >= maxVal)
            {
                (*cnt) = *cnt + 1;
            }
            dfs(head->left, cnt,maxVal);
        }
        if (head->right)
        {
            if (head->right->val >= maxVal)
            {
                (*cnt) = *cnt + 1;
            }
            dfs(head->right, cnt,maxVal);
        }
    }
}

int goodNodes(TreeNode *root)
{
    if (root)
    {
    int cnt = 1;
    int maxVal = root->val;
    dfs(root, &cnt,maxVal);
    return cnt;

    }
    return 0;
    
}

int main()
{
    TreeNode *root = new TreeNode(9);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    // root->left->right = new TreeNode(2);
    cout << goodNodes(root) << endl;
    return 0;
}