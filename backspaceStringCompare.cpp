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

bool backspaceCompare(string s, string t)
{
    stack<char> sts;
    stack<char> stt;
    for (auto x : s)
        if (x == '#')
        {
            sts.pop();
        }
        else
        {
            sts.push(x);
        }

    for (auto x : t)
        if (x == '#')
        {
            stt.pop();
        }
        else
        {
            stt.push(x);
        }

    if (sts == stt)
        return true;
    return false;
}

int main()
{

    return 0;
}