#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    
    if((c == a && d == b) || (c == b && d == a))
    {
        cout<<1;
    }
    else if((a == e && b == f) || (a == f && b == e))
    {
        cout<<2;
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
