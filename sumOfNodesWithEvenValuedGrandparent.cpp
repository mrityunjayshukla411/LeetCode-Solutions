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

void dfs(TreeNode* root, vector<TreeNode *> &v)
{
    if(root)
    {
        if(root->val % 2 == 0)
        {
            v.push_back(root);
        }
        dfs(root->left,v);
        dfs(root->right,v);
    }
}

int sumEvenGrandparent(TreeNode *root)
{
    int sum = 0;
    vector<TreeNode *> v;
    dfs(root,v);
    for(auto x : v)
    {

        if (x->left)
        {
            if(x->left->left) sum+= x->left->left->val; 
            if(x->left->right) sum+= x->left->right->val; 
            
        }
        if (x->r)
        {
        if(x->right->left) sum+= x->right->left->val; 
        if(x->right->right) sum+= x->right->right->val;
        }
        
         
    }
    return sum;
}

int main()
{
    TreeNode *root = new TreeNode(6);
    root->left = new TreeNode(7);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(1);
    root->right->right = new TreeNode(3);

    return 0;
}