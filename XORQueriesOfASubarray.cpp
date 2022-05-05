#include <bits/stdc++.h>

using namespace std;

vector<int> xorQueries(vector<int> &arr, vector<vector<int>> &queries)
{
    vector<int> v;
    int n = arr.size();
    vector<int> preS = arr;
    for (int i = 1; i < n; i++)
    {
        preS[i] ^= preS[i - 1];
    }

    // for (auto x : preS)
    //     cout << x << endl;
    for (auto x : queries)
    {
        int res = 0;
        if (x[0] != 0)
        {
            res = preS[x[1]];
            for (int i = 0; i < x[0]; i++)
            {
                res ^= arr[i];
            }
        }
        else
        {
            res = preS[x[1]];
        }
        v.push_back(res);
    }
    return v;
}

int main()
{

    return 0;
}