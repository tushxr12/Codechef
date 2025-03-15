#include <bits/stdc++.h>
using namespace std;

//Main function
int main() {
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        bool flag = false;
        for(int i = 0;i < x.size();i++)
        {
            if(x[i] != y[i] && x[i] != '?' && y[i] != '?')
            {
                cout<<"NO\n";
                flag = true;
                break;
            }
        }
        if(flag)
            continue;
        else
        cout<<"YES\n";
    }
}
