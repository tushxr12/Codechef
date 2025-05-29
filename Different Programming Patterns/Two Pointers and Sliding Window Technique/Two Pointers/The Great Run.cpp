#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    if(k == n)
    {
        int ans = 0;
        for(auto i : v)
            ans += i;
        cout<<ans;
        return;
    }
    
    int initialSum = 0;
    for(int i = 0;i < k;i++)
        initialSum += v[i];
    
    int maxiSum = initialSum;
    int j = k, i = 0;
    while(j < n)
    {
        initialSum += v[j++];
        initialSum -= v[i++];
        maxiSum = max(maxiSum,initialSum);
    }
    cout<<maxiSum;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
