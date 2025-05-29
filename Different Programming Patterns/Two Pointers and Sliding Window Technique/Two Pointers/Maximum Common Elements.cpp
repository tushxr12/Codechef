#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;cin>>n;
    vector<int> a(n), b(n);
    for(int i = 0;i < n;i++)
        cin>>a[i];
    
    for(int i = 0;i < n;i++)
        cin>>b[i];
    
    int commonValues = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    
    while(i < n && j < n)
    { 
        if(a[i] == b[j])
        {
            commonValues+=1;
            i++;j++;
        }
        else if(a[i] < b[j])
            i++;
        else
            j++;
    }
    cout<<commonValues;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        solve();
        cout<<"\n";
    }
    return 0;
}
