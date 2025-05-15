#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
    }
    int cnt = 0;
    for(int i = 0;i < n - 1;i++)
        if(v[i] == v[i + 1])
            cnt++;
    cout<<n - cnt;
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
