#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;cin>>n;
    vector<int> v(n), ans;
    for(int i = 0;i < n;i++)
        cin>>v[i];
        
    if(n == 1)
    {
        cout<<v[0];
        return 0;
    }

    if(v[0] > v[1])
        ans.push_back(v[0]);
    
    for(int i = 1;i < n - 1;i++)
        if(v[i] > v[i - 1] && v[i] > v[i + 1])
            ans.push_back(v[i]);
    
    if(v[n - 2] < v[n - 1])
        ans.push_back(v[n-1]);
    
    if(ans.size() == 0)
        cout<<-1;
    else
        for(auto i : ans)
            cout<<i<<" ";
}
