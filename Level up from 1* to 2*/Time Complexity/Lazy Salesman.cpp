#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,w;
    cin>>n>>w;
    
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    sort(v.rbegin(), v.rend());
    int currSum = 0;
    for(int i = 0;i < n;i++)
    {
        currSum += v[i];
        if(currSum >= w)
        {
            cout<<(n - (i + 1));
            return;
        }
    }
    cout<<-1;
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
