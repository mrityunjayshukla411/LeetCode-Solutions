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

vector<vector<int>> levelOrderBottom(TreeNode *root)
{
    vector<vector<int>> res;
    if (!root)
    {
        return res;
    }
    queue<TreeNode *> q;
    q.push(root);
        vector<int> temp;
    while (!q.empty())
    {
        int size = q.size();
        temp.clear();
        for (int i = 0; i < size; i++)
        {
            TreeNode *curr = q.front();
            q.pop();

            if (curr->left)
            {
                q.push(curr->left);
            }
            if (curr->right)
            {
                q.push(curr->right);
            }

            temp.push_back(curr->val);
        }
        res.push_back(temp);
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> res = levelOrderBottom(root);
    return 0;
}