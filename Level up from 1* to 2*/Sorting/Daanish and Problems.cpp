#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> v(10);
    for(int i = 0;i < 10;i++)
        cin>>v[i];
    
    int k;cin>>k;
    
    long long cnt = 0;
    for(int i = 9;i >= 0;i--)
    {
        if(cnt + v[i] <= k)
        {
            cnt += v[i];
            v[i] = -1;
        }
    }
    
    for(int i = 9;i >= 0;i--)
    {
        if(v[i] != -1)
        {
            cout<<(i + 1);
            return;
        }
    }
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
