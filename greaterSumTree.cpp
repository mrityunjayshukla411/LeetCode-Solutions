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

int sum = 0;



void inorderTraversal(TreeNode *root)
{
    if (root)
    {
        inorderTraversal(root->left);
        sum += root->val;
        inorderTraversal(root->right);
    }
}


void gameChanger(TreeNode *root)
{
    if (root)
    {
        static int res = sum;
        gameChanger(root->left);
        int temp = root->val;
        root->val = res;
        res -= temp;
        gameChanger(root->right);
    }
}
void reverseOrderTraversal(TreeNode *root,int *prev)
{
    if (root)
    {
        reverseOrderTraversal(root->right,prev);
            root->val += *prev;
            *prev = root->val;
        reverseOrderTraversal(root->left,prev);
    }
    
}


TreeNode *bstToGst(TreeNode *root)
{
    reverseOrderTraversal(root,0);
    return root;
}

int main()
{

    return 0;
}