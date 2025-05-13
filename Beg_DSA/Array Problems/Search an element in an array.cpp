#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i = 0;i < n;i++)
        cin>>arr[i];

    for(int i = 0;i < n;i++)
    {
        if(arr[i] == x)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}
