#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l,r;
    cin>>l>>r;
    if(l == r)
    {
        cout<<1;
    }
    else
    {
        cout<<(r*2 - l*2) + 1;
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
