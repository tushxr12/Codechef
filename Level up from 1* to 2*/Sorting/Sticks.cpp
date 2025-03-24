#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;cin>>n;
    map<int,int> mpp;
    vector<int> v(n);
    for(int i = 0;i < n;i++)
    {
        cin>>v[i];
        mpp[v[i]]++;
    }
    
    bool isPossible = false;
    int cnt = 0;
    vector<int> twos;
    int maxiCount = 0, maxEle = -1;
    for(auto i : mpp)
        if(i.second >= 2)
        {
            cnt++;
            twos.push_back(i.first);
            maxiCount = max(maxiCount, i.second);
            if(i.second >= 4)
            {
                maxEle = i.first;
            }
        }
            
    
    if(cnt >= 2 || maxiCount >= 4)
    {
        isPossible = true;
    }
    
    if(!isPossible)
    {
        cout<<-1;
        return;
    }
    
    sort(twos.begin(), twos.end());
    if(twos.size() == 1)
    {
        cout<<twos[0]*twos[0];
        return;
    }
    int maxi = twos[twos.size() - 1], sMaxi = twos[twos.size() - 2];
    cout<<max(maxi*sMaxi, maxEle*maxEle);
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
