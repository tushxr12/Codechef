#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    
    if(k == 0)
    {
        cout<<n;
        return;
    }
    
    if(k == 1 || n == k || n%k == 0)
    {
        cout<<0;
    }
    else
    {
        cout<<n%k;
    }
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
