#include <bits/stdc++.h>

using namespace std;

#define all(x) (x).begin(), (x).end()

vector<string> ans;
void helper(int open, int close, string &temp)
{
    if (open == 0 && close == 0)
    {
        ans.push_back(temp);
        return;
    }
    if (open > 0) // we can push opening bracket unless we are left with 0 opening bracket
    {
        temp.push_back('(');
        helper(open - 1, close, temp);
        temp.pop_back();
    }
    if (open < close)
    { // we can only push closing if we have more opening in string than closing
        temp.push_back(')');
        helper(open, close - 1, temp);
        temp.pop_back();
    }
}
vector<string> generateParenthesis(int n)
{
    string temp;
    temp += '(';
    helper(n - 1, n, temp);
    return ans;
}
int main()
{

    return 0;
}