#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    cout<<(long long)(v[n - 1] - v[0])*v[n - 2];
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
