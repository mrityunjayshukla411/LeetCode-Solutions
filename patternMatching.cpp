#include <bits/stdc++.h>

using namespace std;

void follPatt(string s)
{
    int n = s.length();
    int cntx = 0;
    int cnty = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            cntx++;
        }
        else
        {
            while (i < s.length() && s[i] == 'y')
            {
                cnty++;
                i++;
            }
            i--;

            if (cntx == cnty)
            {
                cntx  = 0;
                cnty = 0;
            }
            else
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0 && cntx == cnty)
        cout << 1 << endl;
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    follPatt(s);
    return 0;
}