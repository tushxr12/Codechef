#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d,k;
    cin>>a>>b>>c>>d>>k;
    
    int reqSteps = abs(c - a) + abs(d-b);
    if(reqSteps > k)
    {
        cout<<"NO";
    }
    else
    {
        if((k - reqSteps)%2 == 0)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
