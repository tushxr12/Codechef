#CPP Code
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int totSum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            totSum += a[i];
        }
        // your code goes here
        int afterDiscount = x;
        for(int i = 0;i < n;i++)
        {
            if(a[i] - y < 0)
                afterDiscount += 0;
            else
                afterDiscount += (a[i] - y);
        }
        
        if(afterDiscount < totSum){
            cout<<"COUPON\n";
        }
        else
        {
            cout<<"NO COUPON\n";
        }
    }
}

#Python code to be added
