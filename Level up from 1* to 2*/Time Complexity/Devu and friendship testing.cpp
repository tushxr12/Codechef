#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    set<int> st;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        st.insert(v[i]);
    }
    
    cout<<st.size();
}

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
