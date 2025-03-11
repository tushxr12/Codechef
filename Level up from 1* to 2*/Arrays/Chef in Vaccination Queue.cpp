#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,p,x,y;cin>>n>>p>>x>>y;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    int zc = 0, oc = 0;
    if(p == 1)
    {
        cout<<y;
        return;
    }
    
    for(int i = 0;i < n;i++){
        if(i + 1 == p)
        {
            if(v[i] == 0)
                zc++;
            else
                oc++;
            break;
        }
        if(v[i] == 1)
            oc++;
        else
            zc++;
    }
    
    cout<<(oc*y) + (zc*x);
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
