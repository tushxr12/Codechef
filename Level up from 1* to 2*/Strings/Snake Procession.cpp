#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;
    
    int hc = 0, tc = 0;
    char lc;
    for(int i = 0;i < n;i++)
    {
        if(s[i] == 'H')
            hc++;
        else if(s[i] == 'T')
            tc++;
        
        if(tc > 0 && hc == 0 || (s[i] == lc))
        {
            cout<<"Invalid";
            return;
        }
        
        if(s[i] != '.')
        {
            lc = s[i];
        }
    }
    if(hc != tc)
    {
        cout<<"Invalid";
    }
    else
        cout<<"Valid";
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
