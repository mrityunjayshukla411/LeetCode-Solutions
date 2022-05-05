#include <bits/stdc++.h>

using namespace std;

bool checkIfPangram(string sentence)
{
    vector<bool> tt(26, false);
    vector<bool> tt2(26, true);
    for (int i = 0; i < sentence.length(); i++)
    {
        tt[sentence[i] - 'a'] = true;
    }
    // for(auto x : tt)
    //     if (x != true)
    //     {
    //         return false;
    //     }
    if (tt == tt2)
    {
        return true;
    }
    return false;
}

int main()
{

    return 0;
}