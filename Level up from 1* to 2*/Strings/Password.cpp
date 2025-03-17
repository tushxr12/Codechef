#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    
    int n = s.size();
    
    bool lc = false, uc = false, d = false, sc = false;
    for(int i = 0;i < n;i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            lc = true;
        if(s[i] >= 'A' && s[i] <= 'Z' && i > 0 && i < n - 1)
            uc = true;
        if(s[i] >= '0' && s[i] <= '9' && i > 0 && i < n - 1)
            d = true;
        if(s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
        {
            if(i > 0 && i < n - 1)
                sc = true;
        }
    }
    
    if(lc && uc && d && sc && n >= 10)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
