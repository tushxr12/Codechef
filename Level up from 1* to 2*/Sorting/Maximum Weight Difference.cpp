#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int totalSum = 0;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        totalSum += v[i];
    }
        
        
    sort(v.begin(), v.end());
    int sonSum = 0, fatherSum = 0;
    for(int i = 0;i < k;i++)
        sonSum += v[i];
    
    fatherSum = totalSum - sonSum;
    cout<<fatherSum - sonSum;
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
