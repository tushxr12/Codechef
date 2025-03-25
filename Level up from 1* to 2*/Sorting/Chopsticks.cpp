#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
    ll n,d;
    cin>>n>>d;
    
    vector<ll> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];

    sort(v.begin(), v.end());
    ll ans = 0;
    // if(v[1] - v[0] <= d)
    //     ans++;
    for(int i = 1;i <n;i++)
    {
        if(v[i] - v[i - 1] <= d)
        {
            ans++;
            i++;
        }
    }
    
    cout<<ans;
}
