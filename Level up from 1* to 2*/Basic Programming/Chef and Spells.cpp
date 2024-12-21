#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    
    vector<int> v = {a,b,c};
    sort(v.begin(), v.end());
    cout<<v[1] + v[2];
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
