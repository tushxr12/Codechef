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
    int ans = -1;
    for(int i = 0;i < n;i++)
    {
        if(v[i] >= 1 && v[i] <= 7)
        {
            ans = i;
        }
    }
    cout<<ans + 1;
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
