#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    set<char> st;
    for(auto i : s)
        st.insert(i);
    int n;cin>>n;
    bool flag = false;
    while(n--)
    {
        flag = false;
        string s;cin>>s;
        for(auto i : s)
            if(st.find(i) == st.end())
                {
                    cout<<"NO\n";
                    flag = true;
                    break;
                }
        if(flag)
            continue;
        else
            cout<<"YES\n";
    }
    return 0;
}
