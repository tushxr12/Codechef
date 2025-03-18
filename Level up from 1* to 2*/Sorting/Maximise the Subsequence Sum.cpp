#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    long long sum = 0;
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        if(v[i] >= 0)
            sum += v[i];
    }
    sort(v.begin(), v.end());
    for(int i = 0;i < n;i++)
    {
        if(k > 0 && v[i] < 0)
        {
            sum += abs(v[i]);
            k--;
        }
    }
    cout<<sum;
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
