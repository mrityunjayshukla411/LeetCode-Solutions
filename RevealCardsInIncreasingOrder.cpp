#include <bits/stdc++.h>

using namespace std;

vector<int> deckRevealedIncreasing(vector<int> &deck)
{
    int n = deck.size();
    sort(deck.begin(), deck.end());
    vector<int> ans(n);
    int index = 0;
    int flag = 0;
    queue<int> q;
    for (int i = 0; i < n; i++)
        q.push(i);
    while (!q.empty())
    {
        queue<int> check = q;
        while(!check.empty())
        {
            cout<<check.front()<<" ";
            check.pop();
        }
        cout<<endl;      
        if (flag == 0)
        {
            ans[q.front()] = deck[index++];
            q.pop();
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
        flag = !flag;
        for(auto x : ans)
            cout<<x<<" ";
        cout<<endl;      
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> res = deckRevealedIncreasing(v);
    for (auto x : res)
        cout << x << " ";
    return 0;
}