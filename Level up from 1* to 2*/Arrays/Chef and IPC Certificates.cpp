#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,m,k;
    cin>>n>>m>>k;
    int ans = 0;
    // k++;
    while(n--)
    {
        int arr[k + 1];
        for(int i = 0;i <= k;i++)
            cin>>arr[i];
        
        int sum = 0;
        for(int i = 0;i < k;i++)
            sum += arr[i];
        
        if(sum >= m && arr[k] <= 10)
        {
            ans++;
        }
    }
    cout<<ans;
}
