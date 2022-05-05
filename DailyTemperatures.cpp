#include <bits/stdc++.h>

using namespace std;

vector<int> dailyTemperatures(vector<int> &nums)
{
    int n = nums.size();
    stack<int> st;
    vector<int> res(n, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() and nums[i] >= nums[st.top()])
            st.pop();
        if (st.empty())
            res[i] = 0;
        else
            res[i] = (st.top() - i);
        st.push(i);
    }
    return res;
}

int main()
{

    return 0;
}