#include <bits/stdc++.h>

using namespace std;

vector<int> partitionLabels(string s)
{
    vector<int> last(26);
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        last[s[i] - 'a'] = i;
    }
    vector<int> ans;
    int j = 0,anchor = 0;
    for (int i = 0; i < n; i++)
    {
        j = max(j,last[s[i]-'a']);
        if(i == j)
        {
            ans.push_back(i-anchor +1);
            anchor = i+1;
        }
    }
    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<int> v;
    v = partitionLabels(s);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}