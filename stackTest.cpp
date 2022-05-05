#include <bits/stdc++.h>

using namespace std;

void reverseWord(string s)
{
    stack<char> st;
    string res = "";
    int n = s.length();
    int i = 0;
    while(i < n)
    {
        st.push(s[i]);
        if(s[i] == ' ' || i == n - 1 )
        {
            while(st.size() > 0)
            {
                res += st.top();
                // cout<< <<endl;
                st.pop();
            }
            res += ' ';
        }
        i++;
    }
    cout<<res<<endl;
}


int main()
{
    string s = "Hello World";
    reverseWord(s);
    return 0;
}