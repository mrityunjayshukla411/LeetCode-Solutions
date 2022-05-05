#include <bits/stdc++.h>

using namespace std;

string defangIPaddr(string address)
{
    string res = "";
    for (int i = 0; i < address.size(); i++)
    {
        if (address[i] == '.')
        {
            res += "[.]";
            continue;
        }
        res += address[i];
        
    }
    return res;
    
}

int main()
{
    string s;
    cin >> s;
    cout << defangIPaddr(s)<<endl; 
    return 0;
}