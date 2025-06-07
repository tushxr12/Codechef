#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x;cin>>n>>x;
    map<int,int> mpp;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        mpp[v[i]]++;
    }
    int sz = mpp.size();
    cout<<min(sz, n - x);
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
