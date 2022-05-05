#include<bits/stdc++.h>

using namespace std;

double maxN(double x, double y)
{
    return x>y ? x : y ;
}

int main(){
    double a,b,c,res;
    cin>>a>>b>>c;

    if(a>b && a > c)
    {
        res = a;
    }
    else
    {
        if(b>a && b> c)
        {
            res = b;
        }
        else
        {
            res = c;
        }
    }
    // double x,res = INT_MIN;
    // for (int i = 0; i < 3; i++)
    // {
    //     cin>>x;
    //     if(x > res) res = x;
    // }
    cout<<res<<endl;
    
    return 0;
}