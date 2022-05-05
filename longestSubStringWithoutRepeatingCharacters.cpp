#include <bits/stdc++.h>

using namespace std;

int lengthOfLongestSubstring(string s)
{   
    map<char,int> m;
    int ans = 0;
    for (int i = 0, j = 0; j < s.length(); j++)
    {
        if (m.find(s[i]) != m.end())
        {
            i = max(m[s[j]],i);
        }
        ans = max(ans, j - i + 1 );
        m[s[j]] = j +1 ;
        
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    cout << lengthOfLongestSubstring(s) << endl;
    // cout<<s.substr(0,0)<<endl;
    // cout<<s.find("0")<<endl
    return 0;
}