#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    
    vector<int> v1(n), v2(n), v(2*n);
    for(int i = 0;i < n;i++)
    {
        cin>>v1[i];
        v[i] = (v1[i]);
    }
        
    for(int i = 0;i < n;i++)
    {
        cin>>v2[i];
        v[i + n]  = (v2[i]);
    }
    
    // cout<<"Print vector : \n";
    // for(auto i: v)
    //     cout<<i<<" ";
        
    //     cout<<"\n";
    
    sort(begin(v) , end(v));
    int ans = INT_MAX;
    for(int i = 0;i <= n;i++)
    {
        ans = min(ans, v[i + n - 1] - v[i]);
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
    return 0;
}
