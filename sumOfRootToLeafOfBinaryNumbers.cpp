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
bool isLeaf(TreeNode *node)
{
    return (node->left == nullptr && node->right == nullptr);
}

// Recursive function to find paths from the root node to every leaf node
vector<int> res;
void printRootToleafPaths(TreeNode *node, vector<int> &path)
{
    // base case
    if (node == nullptr)
    {
        return;
    }

    // include the current node to the path
    path.push_back(node->val);

    // if a leaf node is found, print the path
    if (isLeaf(node))
    {
        int i = 0;
        
        // for(auto x : path)
        //     cout<<x<<" ";
        // cout<<endl;
        int x = 0;
        int j = 1;
        for(int i = path.size()-1 ;i >=0  ;i--)
        {
            if (path[i])
            {
                x+= j;
            }
            j *= 2;
            
        }
        // cout<<"sum:- "<<x<<endl;
        sum += x;
    }

    // recur for the left and right subtree
    printRootToleafPaths(node->left, path);
    printRootToleafPaths(node->right, path);

    // backtrack: remove the current node after the left, and right subtree are done
    path.pop_back();
}
int sumRootToLeaf(TreeNode *root)
{
    printRootToleafPaths(root,res);
    return sum;
}

int main()
{
    TreeNode *root1 = new TreeNode(1);
    root1->left = new TreeNode(0);
    root1->right = new TreeNode(1);
    root1->left->left = new TreeNode(0);
    root1->left->right = new TreeNode(1);
    root1->right->left = new TreeNode(0);
    root1->right->right = new TreeNode(1);
    // printRootToleafPaths(root1,res);
    // preorderTraversal(root1);
    cout<<sumRootToLeaf(root1);

    return 0;
}