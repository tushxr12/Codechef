#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s;
    cin>>n>>s;
    
    if(n >= s)
    {
        cout<<s;
    }
    else
    {
        // cout<<s;
        cout<<n -(s-n);
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
    
    // 3 1 
    // 2 3 -> {}
    // 5 8 -> {1,7}
}
