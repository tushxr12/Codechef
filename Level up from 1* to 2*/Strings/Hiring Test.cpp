#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    
    int x,y;
    cin>>x>>y;
    
    int u = 0, f = 0, p = 0;
    string ans = "";
    while(n--)
    {
        u = 0, f = 0, p = 0;
        string s;
        cin>>s;
        
        for(auto i : s)
            if(i == 'F')
                f++;
            else if(i == 'U')
                u++;
            else
                p++;
            
        if(f >= x || (f >= x - 1 && p >= y))
            ans += '1';
        else
            ans += '0';
    }
    cout<<ans;
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
