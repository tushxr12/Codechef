#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int w1,w2,x1,x2,m;
    cin>>w1>>w2>>x1>>x2>>m;
    
    int diff = w2 - w1;
    int minAllowed = m*x1;
    int maxAllowed = m*x2;
    
    if(diff >= minAllowed && diff <= maxAllowed)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
