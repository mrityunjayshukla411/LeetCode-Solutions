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

string binaryF(int n)
{
    string s = "";
    while (n)
    {
        // cout<<s<<endl;
        int rem = n%2;
        if(rem)
        {
            s += '1';
        }
        else
        {
            s += '0';
        }
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

vector<int> pathInZigZagTree(int label)
{
    vector<int> res;
    string s = binaryF(label);
    int i = 0;
    while(i<s.length())
    {
        i++;
        if(s[i] == '1')
        {
            res.push_back()
        }
    }
    return res;
}

int main()
{
    cout<<binaryF(16);
    return 0;
}