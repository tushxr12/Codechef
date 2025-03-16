#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int d,l,r;
    cin>>d>>l>>r;
    
    if(d >= l && d <= r)
    {
        cout<<"Take second dose now";
    }else if(d > r){
        cout<<"Too Late";
    }
    else if(d < l)
    {
        cout<<"Too early";
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
