#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> v(n);
    set<int> st;
    for(int i = 0;i <n;i++)
    
        cin>>v[i];
        st.insert(v[i]);
    }
        
    if(st.size() == 1)
    {
        cout<<0;
        return;
    }
    
    int maxi = *max_element(v.begin(), v.end());
    int mini = *min_element(v.begin(), v.end());
    
    cout<<maxi-mini;
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
