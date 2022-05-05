#include<bits/stdc++.h>

using namespace std;

int minCost(vector<vector<int>> colors , int n )
{
    for (int i = 1; i < n; i++)
    {
        
    }
    
}
int main(){
    int n;
    cin>>n;
    int numC;
    cin>>numC;
    vector<vector<int>> colors(numC,vector<int>(numC,0));
    for (int i = 0; i < numC; i++)
    {
        for(int j ; j < numC ; j++)
        {
            cin>>colors[i][j];
        }
    }
    
    return 0;
}