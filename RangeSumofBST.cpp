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

int sum = 0;
void preorder(TreeNode * root,int low,int high)
{
    if (root)
    {
        if (root->val >= low && root->val <= high)
        {
            sum += root->val;
        }
        preorder(root->left,low,high);
        preorder(root->right,low,high);
        
    }
    
}
int rangeSumBST(TreeNode *root, int low, int high)
{
    preorder(root,low,high);
    return sum;
    
}

int main()
{
    TreeNode *root1 = new TreeNode(10);
    root1->left = new TreeNode(5);
    root1->right = new TreeNode(15);
    root1->left->left = new TreeNode(3);
    root1->left->right = new TreeNode(7);
    root1->right->right = new TreeNode(18);

    // preorderTraversal(root1);
    cout << rangeSumBST(root1, 7, 15) << endl;

    return 0;
}