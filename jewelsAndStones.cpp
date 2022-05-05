#include <bits/stdc++.h>

using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    map<char, int> m;
    int res = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
        m[jewels[i]] = 0;
    }
    for (int i = 0; i < stones.size(); i++)
    {
        if (m.find(stones[i]) != m.end())
        {
            m[stones[i]]++;
        }
    }
    for (auto it : m)
        res += (it.second);

    return res;
}

int main()
{
    string jewels, stones;
    cin >> jewels >> stones;
    cout<<numJewelsInStones(jewels,stones);
    return 0;
}