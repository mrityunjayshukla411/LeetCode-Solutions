#include <bits/stdc++.h>

using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    int ans = words.size();
    for(auto x : words)
        for(auto y : x)
            if(allowed.find(y) != string::npos)
            {
                ans--;
                break;
            }
    return ans;
}

int main()
{

    return 0;
}