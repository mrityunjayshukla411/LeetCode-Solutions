#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
#define ld long double
#define FOR(i, a, b, s) for (int i = (a); (s) > 0 ? i < (b) : i > (b); i += (s))
#define for1(e) FOR(i, 0, e, 1)
#define for2(i, e) FOR(i, 0, e, 1)
#define for3(b, e) FOR(i, b, e, 1)
#define for4(i, b, e) FOR(i, b, e, 1)
#define EACH(x, a) for (auto &x : a)
#define vi vector<ll>
#define vvi vector<vector<ll>>
#define pb push_back
#define ff first
#define ss second

int calPoints(vector<string> &ops)
{
    int n = ops.size();
    int sum = 0;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        if (ops[i] == "C")
            res.pop_back();
        else if (ops[i] == "D")
        {

            res.push_back(res[res.size()-1] * 2);
        }
        else if (ops[i] == "+")
        {
            res.push_back(res[res.size()-1] + res[res.size()-2]);
        }
        else
        {
            res.push_back(stoi(ops[i]));
        }
    }
    for(auto x : res)
        sum+=x;
    return sum;
}

int main()
{

    return 0;
}