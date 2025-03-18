#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n,k;
    cin>>n>>k;
    long long totalSum = 0;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        totalSum += v[i];
    }
        
        
    sort(v.begin(), v.end());
    long long sonSum = 0, fatherSum = 0;
    for(int i = 0;i < k;i++)
        sonSum += v[i];
    fatherSum = totalSum - sonSum;
    
    long long sonSum2 = 0, fatherSum2 = 0;
    sort(v.begin() , v.end(), greater<int>());
    
    for(int i = 0;i < k;i++)
        sonSum2 += v[i];
    
    fatherSum2 = totalSum - sonSum2;
    // cout<<"Total sum : "<<totalSum<<endl;
    // cout<<"Son sum : "<<sonSum<<endl;
    // cout<<"Father Sum : "<<fatherSum<<endl;
    
    // cout<<"Total sum : "<<totalSum<<endl;
    // cout<<"Son sum 2: "<<sonSum2<<endl;
    // cout<<"Father Sum 2: "<<fatherSum2<<endl;
    
    long long res1 = fatherSum - sonSum;
    long long res2 = abs(sonSum2 - fatherSum2);
    
    // cout<<"Res1 and Res2 : "<<res1<<" "<<res2<<endl;
    cout<<max(res1, res2);
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
