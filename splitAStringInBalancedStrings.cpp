#include <bits/stdc++.h>

using namespace std;

int balancedStringSplit(string s)
{
    int res = 0;
    int bal = 0;
    for (int i = 0; i < s.length(); i++)
    {
        
        if (s[i] == 'L')
        {
            bal--;
        }
        if (s[i] == 'R')
        {
            bal++;
        }
        if(bal == 0)
        {
            res++;
        }
    }
    return res;
}

int main()
{
    string s;
    cin>>s;
    cout<<balancedStringSplit(s)<<endl;
    return 0;
}