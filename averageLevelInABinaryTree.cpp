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

vector<double> averageOfLevels(TreeNode *root)
{
    vector<double> res;
    if (!root)
    {
        return res;
    }
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        // cout<<"hello"<<endl;
        // vector<int> temp;
        double size = q.size();
        double sum = 0;
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
            sum += curr->val;
        }
        // cout<<"sum:- "<<sum<<endl;
        double avg = sum/size;
        res.push_back(avg);
    }
    return res;
}

int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<double> res = averageOfLevels(root);
    for(auto x : res)
        cout<<x<<" ";
    return 0;
}