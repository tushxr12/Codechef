#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
        cin>>v[i];
    
    vector<int> output;
    int i = 0,j = 1;
    output.push_back(v[i]);
    while(j < n)
    {
        if(v[i] != v[j])
            output.push_back(v[j]);
        i++;
        j++;
    }
    cout<<output.size()<<"\n";
    for(auto i : output)
        cout<<i<<" ";
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
