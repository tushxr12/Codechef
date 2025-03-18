#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    sort(v.begin(), v.end());
    int mini = v[1] - v[0];
    for(int i = 2;i < n;i++)
        mini = min(mini, v[i] - v[i - 1]);
    cout<<mini;
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
