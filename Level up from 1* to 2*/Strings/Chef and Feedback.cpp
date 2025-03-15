#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;cin>>s;
    if(s.find("010") == string::npos && s.find("101") == string::npos)
    {
        cout<<"Bad";
    }
    else
    {
        cout<<"Good";
    }
}

//Main function
int main() {
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
}
