#include <bits/stdc++.h>

using namespace std;

int strStr(string haystack, string needle)
{
    int i = 0,j=0;
    int hSize = haystack.size();
    int nSize = needle.size();
    if(nSize == 0) return 0;
    // vector<int> v;
    int res;
    while (i < hSize && j<nSize)
    {
        cout<<"i:- "<<i<<endl;
        if(haystack[i] == needle[j])
        {
            j++;
            // v.push_back(i);
        }
        else
        {
            if(j>0)
            {
                i -= j;
            }
            j = 0;
        }
        i++;
        
    }

    if(j == nSize) return i-nSize;
    return -1;
    
}

int main()
{
    string hayStack, needle;
    cin >> hayStack;
    cin >> needle;
    cout<<strStr(hayStack,needle);
    return 0;
}