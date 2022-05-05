#include <bits/stdc++.h>

using namespace std;

int findJudge(int n, vector<vector<int>> &trust)
{
    vector<pair<int, int>> in(n + 1, {0, 0});
    for (int i = 0; i < trust.size(); i++)
    {
        in[trust[i][0]].first += 1;
        in[trust[i][1]].second += 1;
    }
    for (int i = 1; i < in.size(); i++)
        if (in[i].first == 0 && in[i].second == n - 1)
            return i;
    return -1;
}

int main()
{

    return 0;
}