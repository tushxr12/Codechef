#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    int i = 0, j = 1;
    int ans = 0;
    
    int cnt = 1, mini = INT_MAX, maxi = INT_MIN;
    
    for(int i = 1;i <n;i++)
    {
        int temp = abs(v[i] - v[i - 1]);
        if(temp <= 2)
        {
            cnt++;
        }
        else
        {
            mini = min(mini, cnt);
            maxi = max(maxi, cnt);
            cnt = 1;
        }
    }
    mini = min(mini, cnt);
    maxi = max(maxi,cnt);
    cout<<mini<<" "<<maxi;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
