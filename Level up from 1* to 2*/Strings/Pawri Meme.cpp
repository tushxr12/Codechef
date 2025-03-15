#include <bits/stdc++.h>
using namespace std;

//Solve function
void solve()
{
    string s;
    cin>>s;
    
    if(s.size() < 5)
    {
        cout<<s;
        return;
    }
    
    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == 'p' && s[i + 1] == 'a' && s[i + 2] == 'r' && s[i + 3] == 't' && s[i + 4] == 'y')
        {
            s[i + 2] = 'w';
            s[i + 3] = 'r';
            s[i + 4] = 'i';
            i = i + 4;
        }
    }
    cout<<s;
}

int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
