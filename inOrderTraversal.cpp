#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

void helper(TreeNode *root, vector<int> &res)
{
    if (root == NULL)
    {
        return;
    }
    else
    {
        if(root->left != NULL)
            helper(root->left,res);
        res.push_back(root->val);
        if(root->right != NULL)
            helper(root->right,res);

    }
}
// Recursive
vector<int> inorderTraversal(TreeNode *root)
{
    vector<int> res;
    helper(root, res);
    return res;
}
// Iterative
vector<int> inorderTraversalIterative(TreeNode *root)
{
    vector<int> res;
    stack<TreeNode *> s;
    TreeNode * curr = root;
    while (curr != NULL || !s.empty())
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        res.push_back(curr->val);
        s.pop();
        curr = curr->right;
    }
    return res;
}

vector<int> inorderTraversalMorris(TreeNode *root)
{
    vector<int> res;
    TreeNode * curr = root;
    while (curr != NULL)
    {
        if(curr->left == NULL)
        {
            res.push_back(curr->val);
            curr = curr->right;
        }
        else
        {
            TreeNode * predecessor = curr->left;
            while (predecessor->right != curr && predecessor->right != NULL)
            {
                predecessor = predecessor->right;
            }
            if (predecessor->right == NULL)
            {
                predecessor->right = curr;
                curr = curr->left;
            }
            else
            {
                predecessor->right = NULL;
                res.push_back(curr->val);
                curr = curr->right;
            }
            
            
        }
    }
    
    return res;
}


int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(20);
    root->right = new TreeNode(30);
    root->left->left = new TreeNode(40);
    root->left->right = new TreeNode(60);
    vector<int> res = inorderTraversalMorris(root);
    for (auto x : res)
        cout << x << " ";
    return 0;
}