#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c; 
    int firstDishCount = min(a,b);
    int bRem = b - firstDishCount;
    int secondDishCount = min(bRem,c);
    
    if(firstDishCount + secondDishCount >= n)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
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
