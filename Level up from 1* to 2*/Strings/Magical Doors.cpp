#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    
    int ans = 0;
    if(s[0] == '0')
        ans = 1;
    
    for(int i = 1;i < s.size();i++)
        if(s[i] != s[i - 1])
        {
            ans++;
        }
    cout<<ans;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
