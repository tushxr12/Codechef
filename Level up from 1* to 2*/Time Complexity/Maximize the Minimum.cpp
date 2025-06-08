#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    sort(v.begin() , v.end());
    int idx = min(k, n - 1);
    cout<<v[idx];
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
