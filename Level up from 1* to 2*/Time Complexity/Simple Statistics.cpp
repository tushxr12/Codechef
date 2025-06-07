#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i = 0;i < n;i++)
        cin>>a[i];
    
    sort(a.begin(), a.end());
    double sum  =0;
    double avg = 0.000000;  
    for(int i=k; i<n-k; i++) 
    {
        sum = sum+a[i];  
    }
    avg = sum/(n-(2*k));
    cout<<fixed<<avg;
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
