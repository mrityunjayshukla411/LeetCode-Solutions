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

void preOrderTraversal(TreeNode *root)
{
    if (root)
    {
        cout<<root->val<<" ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}


TreeNode* helper(vector<int> &preorder, vector<int> &inorder , int inStr , int inEnd)
{
    static int preIndex  = 0;
    if (inStr > inEnd)
    {
        return NULL;
    }
    

    TreeNode* curr = new TreeNode(preorder[preIndex++]);
    int inIndex = 0;
    if (inStr == inEnd)
    {
        return curr;
    }
    
    for (int i = inStr; i <=inEnd; i++)
    {
        if (inorder[i] == curr->val)
        {
            inIndex = i;
            break;
        }
    }

    curr->left = helper(preorder,inorder,inStr,inIndex-1);
    curr->right = helper(preorder,inorder,inIndex+1,inEnd);

    return curr;
    

}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
    TreeNode *res = helper(preorder,inorder,0,preorder.size()-1);
    return res;
}

int main()
{
    vector<int> preorder = {-1}, inorder = {-1};
    TreeNode *root = buildTree(preorder,inorder);

    preOrderTraversal(root);

    return 0;
}