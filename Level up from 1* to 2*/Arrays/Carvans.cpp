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
    
    int maxi = v[0], ans = 1;
    for(int i = 1;i < n;i++)
    {
        if(v[i] < maxi)
        {
            maxi = min(v[i], maxi);
            ans++;
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
