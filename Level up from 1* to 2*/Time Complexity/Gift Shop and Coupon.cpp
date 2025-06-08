#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    sort(v.begin(), v.end());
    int maxGifts = 0;
    for(int i = 0;i < n;i++)
    {
        if(v[i] <= k && k >= 0)
        {
            maxGifts++;
            k -= v[i];
        }
        else
        {
            int afterDiscount = ceil(v[i]*1.0 / (2.0 * 1.0));
            if(afterDiscount <= k)
            {
                maxGifts++;
                break;
            }
        }
    }
    
    cout<<maxGifts;
}

int main() {
	// your code goes here
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
