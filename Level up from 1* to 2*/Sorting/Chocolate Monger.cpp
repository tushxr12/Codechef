#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    
    vector<int> v(n);
    map<int,int> mpp;
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        mpp[v[i]]++;
    }
    int sz = mpp.size();
    cout<<min(n - k, sz);
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
