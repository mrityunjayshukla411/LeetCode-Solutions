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

int mySqrt(int x)
{

    if (x == 0)
        return 0;
    if (x == 1 || x == 2 || x == 3)
        return 1;

    long long int left = 0, right = x / 2;

    while (left <= right)
    {

        long long int mid = (left + right) / 2;

        long long int curr = x / mid;

        if (mid == curr)
            return mid;
        else if (mid > curr)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return left - 1;
}

int main()
{
    int n;
    cin >> n;
    cout << mySqrt(n) << endl;
    return 0;
}