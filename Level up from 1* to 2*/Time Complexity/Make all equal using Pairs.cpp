#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    map<int,int> mpp;
    for(auto i : v)
        mpp[i]++;
    
    int maxi = -1;
    for(auto i : mpp)
        maxi = max(maxi, i.second);
    cout<<n - maxi;
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
