#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    int ans = 0;
    for(int i = 0;i < n;i++)
    {
        int curr = v[i], le = 0, ge = 0;
        for(int j = 0;j < n;j++)
        {
            if(v[j] <= curr)
            {
                le++;
            }
            else
            {
                ge++;
            }
        }
        if(le > ge)
            ans++;
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
