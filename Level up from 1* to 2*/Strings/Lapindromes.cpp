#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    
    int n = s.size();
    map<char,int> left, right;
    if(n%2)
    {
        for(int i = 0;i < n/2;i++)
        {
            left[s[i]]++;
        }
        
        for(int i = n/2 + 1;i < n;i++)
        {
            right[s[i]]++;
        }
    }   
    else
    {
        for(int i = 0;i < n/2;i++)
        {
            left[s[i]]++;
        }
        
        for(int i = n/2;i < n;i++)
        {
            right[s[i]]++;
        }
    }
    // cout<<"Left map : \n";
    // for(auto i : left)
    // {
    //     cout<<i.first<<" "<<i.second<<"\n";
    // }
    // cout<<"\n";
    // cout<<"Right map : \n";
    // for(auto i : right)
    // {
    //     cout<<i.first<<" "<<i.second<<"\n";
    // }
    // cout<<"\n";
    for(auto i : left)
    {
        if(right.find(i.first) == right.end() || i.second != right[i.first])
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
