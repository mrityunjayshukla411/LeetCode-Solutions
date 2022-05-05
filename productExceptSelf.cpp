#include <bits/stdc++.h>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> ans = nums;
    int n = nums.size();
    for (int i = n - 2; i > 0; i--)
        ans[i] *= ans[i + 1];
    int product = 1;
    for (int i = 0; i < n - 1; i++)
    {
        ans[i] = ans[i + 1] * product;
        product *= nums[i];
    }
    ans[n - 1] = product;
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4};
    vector<int> res = productExceptSelf(v);
    for (auto x : res)
        cout << x << endl;
    return 0;
}