#include <bits/stdc++.h>

using namespace std;

void backTrack(vector<int> can, int target, int start, vector<int> vec, vector<vector<int>> res)
{
    if (target < 0)
    {
        return;
    }
    if (target == 0)
    {
        res.push_back(vec);
    }
    for (int i = start; i < can.size(); i++)
    {
        vec.push_back(can[i]);
        backTrack(can, target - can[i], i++, vec, res);
        vec.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> res;
    vector<int> r;
    sort(candidates.begin(),candidates.end());
    backTrack(candidates, target, 0, r, res);
    return res;
}

int main()
{
    cout << "Hello" << endl;
    return 0;
}