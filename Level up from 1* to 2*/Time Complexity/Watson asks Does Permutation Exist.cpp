#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    sort(v.begin() , v.end());
    for(int i = 1;i < n;i++)
    {
        if(v[i] - v[i - 1] > 1)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
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
