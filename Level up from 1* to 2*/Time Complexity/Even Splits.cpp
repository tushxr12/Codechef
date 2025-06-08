#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    string s;
    cin>>s;
    
    if(n <= 2)
    {
        cout<<s;
        return;
    }
    sort(s.begin(), s.end());
    cout<<s;
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
