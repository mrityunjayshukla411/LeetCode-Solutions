#include <bits/stdc++.h>

using namespace std;

int romanToInt(string s)
{
        map<string, int> m;
    m["I"] = 1;
    m["IV"] = 4;
    m["V"] = 5;
    m[ "IX"] = 9;
    m["X"] = 10;
    m["XL"] = 40;
    m["L"] = 50;
    m["XC"] = 90;
    m["C"] = 100;
    m["CD"] = 400;
    m["D"] = 500;
    m["CM"] = 900;
    m["M"] = 1000;
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i<s.size()-1)
        {
            string cm = "";
            cm += s[i];
            cm += s[i+1];
            if (m.find(cm) != m.end())
            {
                num += m[cm];
                i++;
                continue;
            }
            
        }
        string str = "";
        str += s[i];
        if (m.find(str) != m.end())
        {
            num += m[str];
        }
        
        
    }
    return num;
}
int main()
{
    string s;
    cin >> s;
    cout << romanToInt(s) << endl;
    return 0;
}