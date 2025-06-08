#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    //-10 -4 -1 0 2 6
    sort(v.begin(), v.end());
    int sum = 0;
    for(int i = 0;i < n;i++)
    {
        if(v[i] > 0)
            sum += v[i];
        else
        {
            if(k > 0)
            {
                sum += abs(v[i]);
                k--;
            }
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
