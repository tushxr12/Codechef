#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        // your code goes here
        if(n == 1)
        {
            cout<<0;
            return 0;
        }
        
        int mini = 101;
        for(int i = 0;i < n;i++)
        {
            if(a[i] < mini)
                mini = a[i];
        }
        
        int cntMini = 0;
        map<int,int> mpp;
        for(int i = 0;i < n;i++)
            mpp[a[i]]++;
        for(auto i : mpp)
            if(i.first == mini)
            {
                cntMini = i.second;
                break;
            }
        cout<<abs(n - cntMini)<<"\n";
    }

}
