#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;cin>>n>>m;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    vector<int> temp(m + 1,0);
    for(int i = 0;i < n;i++)
    {
        temp[v[i]]++;
    }
    for(int i = 1;i <= m;i++)
    {
        if(temp[i] == 0)
        {
            cout<<"YES";
            return;
        }
    }
    cout<<"NO";
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
