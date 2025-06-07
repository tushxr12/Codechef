#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    for(int i = n - 1;i >= 0;i--)
    {
        if(v[i] >= 1 && v[i] <= 7)
        {
            cout<<(i + 1);
            return;
        }
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
