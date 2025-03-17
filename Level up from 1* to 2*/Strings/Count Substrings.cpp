#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;cin>>s;
    
    long long oc = 0;
    for(auto i : s)
        if(i == '1')
            oc++;
        
    cout<<oc + (oc* (oc - 1) / 2);
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
