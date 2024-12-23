#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    int sum = n*(n + 1)/2;
    if(sum%2)
        cout<<n-1;
    else
        cout<<n;
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
