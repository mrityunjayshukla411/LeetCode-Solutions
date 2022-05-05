#include <bits/stdc++.h>

using namespace std;

int f(int i, int n, vector<int> &arr, int k, vector<int> &v)
{
    if (i >= n)
    {
        return 0;
    }
    if (v[i] != -1)
    {
        return v[i];
    }
    int m = arr[i];
    int sum = arr[i];

    for (int j = i; j < i + k and j < n; j++)
    {
        m = max(m, arr[j]);
        sum = max(sum, m * (j - i + 1) + f(j + 1, n, arr, k, v));
    }
    return v[i] = sum;
}
int maxSumAfterPartitioning(vector<int> &arr, int k)
{
    int n = arr.size();
    vector<int> v(n + 1, -1);
    return f(0, arr.size(), arr, k, v);
}
int main()
{

    return 0;
}