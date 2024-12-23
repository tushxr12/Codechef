#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int u,a,s;
    double v;
    cin>>u>>v>>a>>s;
    
    int vel = (u*u) - 2*a*s;
    double sqrtVel = sqrt(vel);
    
    if(sqrtVel > v)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
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
