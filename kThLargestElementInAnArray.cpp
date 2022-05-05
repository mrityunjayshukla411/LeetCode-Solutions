#include <bits/stdc++.h>

using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    // priority_queue<int> pq;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     pq.push(nums[i]);
    // }
    // while (k>=1)
    // {
    //     pq.pop();
    //     k--;
    // }
    // return pq.top();

    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(nums[i]);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > pq.top())
        {
            pq.push(nums[i]);

            cout << pq.top() << endl;
            pq.pop();
        }
    }
    return pq.top();
}

int main()
{
    vector<int> v = {3, 2, 1, 5, 6, 4};
    cout << findKthLargest(v, 2);
    return 0;
}