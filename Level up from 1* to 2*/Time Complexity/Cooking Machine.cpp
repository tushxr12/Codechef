#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin>>a>>b;
    
    
    int ans = 0;
    while(__builtin_popcount(a) > 1)
    {
        ans++;
        a /= 2;
    }
    
    while(a > b)
    {
        a /= 2;
        ans++;
    }
    
    while(a < b)
    {
        a *= 2;
        ans++;
    }
    
    cout<<ans;
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
