#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m,x,y;
    cin>>m>>x>>y;
    
    vector<int> v(m) ;
    for(int i = 0;i < m;i++)
        cin>>v[i];
    
    int dis = x*y;
    int ans = 0;
    for(int i = 1;i <= 100;i++)
    {
        bool safe = true;
        for(int j = 0;j < m;j++)
        {
            int lRange = max(v[j] - dis,1);
            int rRange = min(v[j] + dis, 100);
            
            if(i >= lRange && i <= rRange)
            {
                safe = false;
            }
        }
        if(safe)
            ans += 1;
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
