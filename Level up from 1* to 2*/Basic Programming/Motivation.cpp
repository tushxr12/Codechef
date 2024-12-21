#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int> &p1, pair<int,int> &p2)
{
    return (p1.first > p2.first);
}

void solve()
{
    int n,x;
    cin>>n>>x;
    
    vector<pair<int,int>> mpp;
    int inp = n;
    while(inp--)
    {
        int a,b;
        cin>>a>>b;
        mpp.push_back(make_pair(b,a));
    }
    sort(mpp.begin(), mpp.end(), cmp);
    int ans = -1;
    
    for(auto i : mpp)
    {
        if(i.second <= x)
        {
            ans = i.first;
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
