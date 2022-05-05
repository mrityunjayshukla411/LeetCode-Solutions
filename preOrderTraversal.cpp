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
        res.push_back(root->val);
        if(root->left != NULL)
            helper(root->left,res);
        if(root->right != NULL)
            helper(root->right,res);

    }
}
// Recursive
vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> res;
    helper(root, res);
    return res;
}
// Iterative
vector<int> preorderTraversalIterative(TreeNode *root)
{
    vector<int> res;
    stack<TreeNode *> s;
    TreeNode * curr = root;
    while (curr != NULL || !s.empty())
    {
        while (curr!= NULL)
        {
            res.push_back(curr->val);
            if(curr->right)
            {
                s.push(curr->right);
            }
            curr = curr->left;
        }

        
        
        if(!s.empty())
        {
            curr = s.top();
            s.pop();
        }
        
    }
    
    return res;
}

vector<int> preorderTraversalMorris(TreeNode *root)
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
            cout<<"Curr:- "<<curr->val<<" Predecessor:- "<<predecessor->val<<endl;
            if (predecessor->right == NULL)
            {
                predecessor->right = curr;
                res.push_back(curr->val);
                curr = curr->left;
            }
            else
            {
                predecessor->right = NULL;
                curr = curr->right;
            }
            
            
        }
    }
    
    return res;
}


int main()
{
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(11);
    root->right = new TreeNode(12);
    root->left->left = new TreeNode(13);
    root->left->right = new TreeNode(14);
    vector<int> res = preorderTraversalMorris(root);
    for (auto x : res)
        cout << x << " ";
    return 0;
}