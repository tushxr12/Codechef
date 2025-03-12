#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
    }
    if(v[0] == 0)
    {
        cout<<0;
        return;
    }
    int ans = 0;
    for(int i = 0;i < n;i++)
    {
        ans += v[i];
        if(v[i] == 0 && ans == (i))
        {
            break;
        }
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
