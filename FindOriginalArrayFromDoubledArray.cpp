#include <bits/stdc++.h>

using namespace std;

vector<int> findOriginalArray(vector<int> &changed)
{
    vector<int> res;
    vector<int> temp;

    int i = 0;
    while (i < changed.size())
    {

        remove(changed.begin(), changed.end(), changed[i]);
        remove(changed.begin(), changed.end(), changed[i] * 2);
        i++;
    }
    if (changed.size() == 0)
    {
        cout<<"Hello"<<endl;
    }
    return temp;
}

int main()
{

    return 0;
}   