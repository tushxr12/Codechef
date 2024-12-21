#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c; // a fruit, b veg, c fish
    
    // 1fruit & 1veg
    // 1veg & 1fish
    
    //3 2 2 2 
    //5 5 3 2
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
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
