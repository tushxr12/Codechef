#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,b;cin>>n>>b;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
        
    
    sort(begin(v), end(v));
    int i = 0, j = 1;
    
    while(i < n && j < n)
    {
        if(i != j && abs(v[i] - v[j]) == b)
        {
            cout<<1;
            return;
        }
        else if(abs(v[i] - v[j]) < b)
        {
            j++;
        }
        else {
            i++;
        }
        if(i == j)
            j++;
    }
    cout<<0;
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
