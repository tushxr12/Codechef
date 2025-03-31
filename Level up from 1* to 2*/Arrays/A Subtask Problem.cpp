#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    
    vector<int> v(n);
    int zc = 0;
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        if(v[i] == 0)
            zc++;
    }
    
    if(!zc)
    {
        cout<<100;
        return;
    }
    
    zc = 0;
    for(int i = 0;i < m;i++)
    {
        if(v[i] == 0)
        {
            cout<<0;
            return;
        }
    }
    cout<<k;
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
