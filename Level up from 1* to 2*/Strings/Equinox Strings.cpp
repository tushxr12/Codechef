#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b;
    cin>>n>>a>>b;
    
    long long int anuradha = 0, sarthak = 0;
    
    while(n--)
    {
        string s;
        cin>>s;
        string toFind = "EQUINOX";
        if(toFind.find(s[0]) != string::npos)
        {
            sarthak += a;
        }
        else
        {
            anuradha += b;
        }
    }
    
    if(anuradha == sarthak)
    {
        cout<<"DRAW";
    }
    else if(anuradha > sarthak)
    {
        cout<<"ANURADHA";
    }
    else
    {
        cout<<"SARTHAK";
    }
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
