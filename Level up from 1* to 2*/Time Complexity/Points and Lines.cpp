#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int> st1,st2;
    int cnt = 0;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        
        if(st1.find(x) == st1.end())
        {
            st1.insert(x);
            cnt++;
        }
        
        if(st2.find(y) == st2.end())
        {
            st2.insert(y);
            cnt++;
        }
    }
    cout<<cnt;
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
