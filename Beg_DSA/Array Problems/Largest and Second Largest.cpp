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
        sort(a, a + n);
        for(int i = n - 1;i > 0;i--)
        {
            if(a[i] != a[i - 1])
            {
                cout<<a[i] + a[ i - 1]<<"\n";
                break;
            }
        }
    }
}
