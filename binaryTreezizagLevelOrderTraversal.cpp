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

vector<vector<int>> zigzagLevelOrder(TreeNode *root)
{

    vector<vector<int>> res;
    if (!root)
    {
        return res;
    }

    queue<TreeNode *> q;
    q.push(root);
    bool leftToRight = false;
    while (!q.empty())
    {
        leftToRight = !leftToRight;
        int size = q.size();
        vector<int> temp;
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
        if (!leftToRight)
        {
            reverse(temp.begin(),temp.end());
        }
        
        res.push_back(temp);
    }
    return res;
}

int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    vector<vector<int>> res = zigzagLevelOrder(root);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[j].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}