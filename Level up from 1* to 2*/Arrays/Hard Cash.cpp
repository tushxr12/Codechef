#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<int> v(n);
    long long sum = 0;
    for(int i = 0;i <n;i++)
    {
        cin>>v[i];
        sum += v[i];
    }
    cout<<sum%k;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
