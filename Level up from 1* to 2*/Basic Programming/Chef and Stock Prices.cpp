#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int s,a,b,c;
    cin>>s>>a>>b>>c;
    
    double stockPriceChange = (double)(((s*1.0)*abs(c*1.0))/100.0);
    // cout<<"C value : "<<c<<endl;
    double finalPrice = c > 0 ?(double) (s + stockPriceChange) :(double) (s - abs(stockPriceChange));
    // cout<<"Stock price change : "<<stockPriceChange<<endl;
    // cout<<"Final price "<<finalPrice<<endl;
    if(finalPrice >= a && finalPrice <= b)
        cout<<"YES";
    else
        cout<<"NO";
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
