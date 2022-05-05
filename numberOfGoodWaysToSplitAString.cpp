#include <bits/stdc++.h>

using namespace std;

int numSplits(string s) {
        
        set<char>se;
        int n=s.size();
        vector<int>sfx(n,0);
        int i;
        
        for(i=n-1;i>=0;i--)
        {
            se.insert(s[i]);
            sfx[i]=se.size();
        }
        se.clear();
        se.insert(s[0]);
        int count=0;
        for(i=1;i<n;i++)
        {
            if(sfx[i]==se.size())
            {
                count++;
            }
            se.insert(s[i]);
        }
        return count;
    }
int main()
{

    return 0;
}