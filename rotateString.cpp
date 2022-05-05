#include <bits/stdc++.h>

using namespace std;

// string rotateString(string s)
// {
//     reverse(s.begin()+1,s.end());
//     reverse(s.begin(),s.end());
//     return s;

// }

// bool rotateString(string s, string goal)
// {
//     cout<<rotateString(s)<<endl;
//     int n = s.length();
//     for (int i = 0; i < n; i++)
//     {
//         if (s == goal)
//         {
//             return true;
//         }
//         s = rotateString(s);

//     }
//     return false;

//     return true;
// }

bool rotateString(string s, string goal)
{
    s += s;
    // cout<<s.substr(0,5)<<endl;
    int n = goal.length();
    for (int i = 0; i < n; i++)
    {
        cout<<s.substr(i,n+i)<<endl;
        if (s.substr(i,n+i) == goal)
        {
            return true;
        }
        
    }
    
    return false;
}

int main()
{

    return 0;
}