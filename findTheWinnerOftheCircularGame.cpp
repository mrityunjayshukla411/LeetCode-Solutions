#include <bits/stdc++.h>

using namespace std;


int findTheWinner(int n, int k)
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    
    while (q.size() != 1)
    {
        for (int i = 0; i < k-1; i++)
        {
            int x = q.front();
            q.pop();
            q.push(x);
        }
        q.pop();
        
    }
    return q.front();
}

int main()
{
    cout << findTheWinner(3,3);

    return 0;
}