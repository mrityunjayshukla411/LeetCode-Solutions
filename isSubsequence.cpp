#include <bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t)
{
    int i = 0;
    int j = 0;
    int n1 = s.length();
    int n2 = t.length();
    
    size_t found = t.find(s[0]);
    for (int i = 0; i < n1; i++)
    {
        if(t.find(s[i]) == string::npos || t.find(s[i]) < found) return false;
        found = t.find(s[i]);
    }
    return true;
}
// bool isSubsequence(string s, string t)
// {
//     int i = 0;
//     int j = 0;
//     int n1 = s.length();
//     int n2 = t.length();

//     while (i < n1 && j < n2)
//     {
//         if (s[i] == t[j])
//         {
//             i++;
//         }
//         j++;
        
//     }
//     if(i == n1) return true; 
//     return false;
    
// }

int main()
{

    return 0;
}