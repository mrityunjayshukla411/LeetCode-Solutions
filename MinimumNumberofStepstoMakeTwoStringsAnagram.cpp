#include <bits/stdc++.h>

using namespace std;

int minSteps(string s, string t)
{
    vector<int> v(26,0);
    for (int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a']++;
    }
    for (int i = 0; i < t.length(); i++)
    {
        if(v[t[i] - 'a'])
        {
            v[t[i] - 'a']--;
        }
    }
    int sum = 0;
    for (int i = 0; i < 26; i++)
    {
        sum+= v[i];
    }
    return sum;
    
}

int main()
{
    string s,t;
    cin>>s>>t;
    cout<<minSteps(s, t)<<endl;
    return 0;
}