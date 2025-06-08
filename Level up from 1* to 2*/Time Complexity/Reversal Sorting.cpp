#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    int mx = 0, fl = 1;
    for(int i = 0;i < n;i++)
    {
        if(mx > v[i] && mx + v[i] > k)
        {
            fl = 0;
            break;
        }
        mx = max(mx, v[i]);
    }
    if(fl == 0)
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
