#include <bits/stdc++.h>

using namespace std;

int maxDepth(string s)
{
    stack<int> st;
    int res = 0;
    int cntL = 0;
    int cntR = 0;
    st.push(0);
    for (int i = 0; i < s.size(); i++)
    {
        res = cntL-cntR;
        if(s[i] == '(')
        {
            cntL++;
        }
        if(s[i] == ')')
        {   
            cntR++;
        }
        if(st.top() < res)
        {
            st.pop();
            st.push(res);
        }
    }
    return st.top();
}

int main()
{
    string s;
    cin >> s;
    cout<<maxDepth(s)<<endl;
    return 0;
}