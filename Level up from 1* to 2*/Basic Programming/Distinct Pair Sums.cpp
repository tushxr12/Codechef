#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l,r;
    cin>>l>>r;
    
    //2 5 -> {4,5,6,7,8,9}
    if(l == r)
    {
        cout<<1;
    }
    else
    {
        cout<<(r*2 - l*2) + 1;
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
}
