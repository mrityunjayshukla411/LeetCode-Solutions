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

static bool comp(string &s, string &t)
{
    return stoi(s) < stoi(t);
}
vector<vector<string>> displayTable(vector<vector<string>> &nums)
{
    int n = nums.size();
    set<string> st;
    unordered_map<string, vector<string>> m;
    unordered_map<string, unordered_map<string, int>> mp;
    for (auto x : nums)
    {
        st.insert(x[2]);
        m[x[1]].push_back(x[2]);
        mp[x[1]][x[2]]++;
    }
    vector<string> v(st.begin(), st.end());
    sort(v.begin(), v.end());
    int row = m.size() + 1;
    int col = v.size() + 1;
    vector<vector<string>> c(row, vector<string>(col));
    vector<string> v1;
    for (auto x : m)
    {
        v1.push_back(x.first);
    }
    sort(v1.begin(), v1.end(), comp);
    c[0][0] = "Table";
    int i = 1;
    for (auto x : v1)
    {
        c[i++][0] = x;
    }
    for (int j = 1; j < col; j++)
    {
        c[0][j] = v[j - 1];
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            string s = c[0][j];
            string t = c[i][0];
            int z = mp[t][s];
            c[i][j] = to_string(z);
        }
    }
    return c;
}
int main()
{

    return 0;
}