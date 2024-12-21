#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;
    cin>>x;
    
    if(x >= 1 && x < 100)
    {
        cout<<"Easy";
    }
    else if(x >= 100 && x < 200)
    {
        cout<<"Medium";
    }
    else
    {
        cout<<"Hard";
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
